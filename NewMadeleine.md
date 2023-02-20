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

> iovec
> nm_data iterator

| fun               | self | shm | description               |
| ----------------- | ---- | --- | ------------------------- |
| .getprops         | 1    | 1   | return properties         |
| .init             | 1    | 1   | init & return url         |
| .close            | 1    | 1   | close & free              |
| .connect          | 1    | 1   | connect the instance      |
| .send_iov_post    | 1    | 1   | post send (iovec)         |
| .send_data_post   | 0    | 1   | post send (nm_data_s)     |
| .send_buf_get     | 0    | 1   | prepare data for post buf |
| .send_buf_post    | 0    | 1   | post send (buffer)        |
| .send_poll        | 1    | 1   | poll to update the status |
| .recv_iov_post    | 1    | 1   | post receive (iovec)      |
| .recv_data_post   | 0    | 1   | post receive (nm_data_s)  |
| .recv_poll_one    | 1    | 1   | poll to update the status |
| .recv_buf_poll    | 0    | 1   | receive (buffer) ...      |
| .recv_buf_release | 0    | 1   | receive (buffer) ...      |
| .recv_cancel      | 1    | 1   | cancel a posted receive   |

Example as example :

- `nmad/examples/sendrecv/nm_sr_hello2.c`
- `nmad/examples/sendrecv/nm_sr_event_data.c`
- `nmad/examples/sendrecv/nm_sr_custom_data.c`
- `nmad/examples/benchmarks/nm_bench_req_monitor.c`

to test driver `nm_driver_test.c`.
