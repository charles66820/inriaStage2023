# NewMadeleine details

## Build

```bash
./pm2-build-packages ./madmpi-mini.conf --prefix=$HOME/soft/x86_64
# or
scripts/pm2-build-packages scripts/madmpi-mini.conf --prefix=$HOME/soft/x86_64
# or
pm2/scripts/pm2-build-packages pm2/scripts/madmpi-mini.conf --prefix=$HOME/soft/x86_64
```

## run tests

<!-- PM2_ROOT=$HOME/pm2 ./nmad-test.sh tests shm localhost localhost -->

> load env

```bash
source $HOME/soft/x86_64/share/madmpi-mini.conf.sh
```

> 2 process on one node

```bash
padico-launch -n 2 -DNMAD_DRIVER=shm nm_sr_hello2
export NMAD_DRIVER=shm; mpirun -n 2 nm_sr_hello2
```

> 2 process on two nodes

```bash
padico-launch -n 2 -nodelist billy0,billy1 -DNMAD_DRIVER=shm nm_sr_hello2
export NMAD_DRIVER=shm; mpirun -n 2 -host billy0,billy1 nm_sr_hello2
```

<!-- --map-by ppr:1:core hostname -->

<!-- sig_shm -->
<!-- padico-launch -n 2 -DNMAD_DRIVER=shm -DNM_DRIVER_TEST=sig_shm nm_sr_hello2 -->

## padico vs mpirun

| mpirun                                 | padico                  | description           |
| -------------------------------------- | ----------------------- | --------------------- |
| -n \| -np \| -c \| --n \| --np \<nb\>  | -n \| -np \<nb\>        | set number of process |
| -c                                     | -v                      | verbose               |
| export NMAD_DRIVER=shm; mpirun \<...\> | -DNMAD_DRIVER=shm       | env var               |
| -host billy0,billy1                    | -nodelist billy0,billy1 |                       |
|                                        | -c                      | console ?             |

## ENV vars

| name          | default value | description         |
| ------------- | ------------- | ------------------- |
| NMAD_STRATEGY | "aggreg"      | choose the strategy |
| NMAD_DRIVER   | "tcp"         | choose the driver   |

## Code

`nmad/drivers` all driver folders.
`nmad/examples` examples of interfaces use.
`nmad/interfaces` all interfaces folder (implementation and header) (e.g. MPI, RPC, sendrecv...).
`nmad/strategies` all strategies folders.

The session (`nmad/interfaces/session/src/nm_session.c`) initialise the strategy and the driver and send them to the `p_core` (nm_core.c).

Session is used in many `NewMadeleine` interfaces.

> all `post a "send"` can be done by a progression or by a Put...

| fun                                               | return                  | self | shm | description                                                                                                                                                                                          |
| ------------------------------------------------- | ----------------------- | ---- | --- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| .getprops(ˇcontext, ˆprops)                       | void                    | 1    | 1   | return NIC or driver properties                                                                                                                                                                      |
| .init(ˇcontext, ˆurl, ˆurlLen)                    | void                    | 1    | 1   | init & return url                                                                                                                                                                                    |
| .close(ˇcontext)                                  | void                    | 1    | 1   | close & free                                                                                                                                                                                         |
| .connect(ˇstatus, ˇremoteUrl, ˇurlLen)            | void                    | 1    | 1   | connect the instance to the NIC                                                                                                                                                                      |
| .send_iov_post(ˇstatus, ˇioVec[], ˇnbVec)         | NO_MEM or SUCCESS       | 1    | 1   | post a "send" for each element of ioVec (iovec is composed of data ptr and length) and update the status (the slicer, the block number and the len)                                                  |
| .send_data_post(ˇstatus, ˇdataPtr, ˇoffset, ˇlen) | NO_MEM or SUCCESS       | 0    | 1   | post a "send" for data in dataPtr (nm_data_s) from offset to offset + len and update the status (the slicer, the block number and the len)                                                           |
| .send_buf_get(ˇstatus, ˆbufPtr, ˆlen)             | NO_MEM or SUCCESS       | 0    | 1   | return a pointer to a memory zone. This zone can be a projection of a shm memory section... The user will write its data in the memory zone (the block number)                                       |
| .send_buf_post(ˇstatus, ˇlen)                     | SUCCESS                 | 0    | 1   | tell the length of data to send and maybe post a "send" and update the status (the len)                                                                                                              |
| .send_poll(ˇstatus)                               | AGAIN or SUCCESS        | 1    | 1   | poll a "send progression" which is to check if data is send and send the next data or resent the failed data and update the status                                                                   |
| .recv_iov_post(ˇstatus, ˇioVec[], ˇnbVec)         | SUCCESS                 | 1    | 1   | post a "receive" to allow to receive the data, to do this it just update the status with the ioVec[] and the number of elements (each ioVec element is already allocate and the sizes are defined??) |
| .recv_data_post(ˇstatus, ˇdataPtr, ˇoffset, ˇlen) | SUCCESS                 | 0    | 1   | post a "receive" to prepare to receive the data in dataPtr (nm_data_s). To do this we configure a slicer with ptr, offset and update the status (the slicer and the len)                             |
| .recv_poll_one(ˇstatus)                           | AGAIN, INVAL or SUCCESS | 1    | 1   | poll a "receive progression" which is to check if data is receive or not (and process data chunks, types...) and update the status. For shm we copy the data or we use the slicer                    |
| .recv_buf_poll(ˇstatus, ˆbufPtr, ˆlen)            | AGAIN or SUCCESS        | 0    | 1   | poll a "receive progression" which is to check if data is receive or not (and process data chunks, types...) and update the status. For shm we just get the shm memory space                         |
| .recv_buf_release(ˇstatus)                        | SUCCESS                 | 0    | 1   | free the memory zone (the buffer)                                                                                                                                                                    |
| .recv_cancel(ˇstatus)                             | SUCCESS or NOT_POSTED   | 1    | 1   | cancel a posted request that is waiting to receive data and clean the status                                                                                                                         |

Example as example :

- `nmad/examples/sendrecv/nm_sr_hello2.c`
- `nmad/examples/sendrecv/nm_sr_event_data.c`
- `nmad/examples/sendrecv/nm_sr_custom_data.c`
- `nmad/examples/benchmarks/nm_bench_req_monitor.c`

to test driver `nm_driver_test.c`.
