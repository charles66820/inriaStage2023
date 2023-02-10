#

## Build

```bash
./pm2-build-packages ./madmpi-mini.conf --prefix=$HOME/soft/x86_64
```

## ENV vars

| name          | default value | description         |
| ------------- | ------------- | ------------------- |
| NMAD_STRATEGY | "aggreg"      | choose the strategy |
| NMAD_DRIVER   | "tcp"         | choose the driver   |

## Code

`nmad/drivers` all driver folders.
`nmad/examples` ??.
`nmad/strategies` all strategies folders.

The session (`nmad/interfaces/session/src/nm_session.c`) initialise the strategy and the driver.

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
