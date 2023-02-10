#

## Build

```bash
./pm2-build-packages ./madmpi-mini.conf --prefix=$HOME/soft/x86_64
```

## ENV vars

name | default value | description
---|---|---
NMAD_STRATEGY | "aggreg" | choose the strategy
NMAD_DRIVER | "tcp" | choose the driver

## Code

The session (`nm_session.c`) initialise the strategy and the driver.
