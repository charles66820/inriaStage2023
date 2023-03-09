# BXI

## Links

- [`Portals 4` docs](https://www.sandia.gov/portals/portals-4-0-specification-clone-2/)
- [`Portals 4`](https://github.com/Portals4/portals4)

## notes

`BXI` : Bull eXascale Interconnect

Bull, Atos..

2 networks (of 4):

1. management network : logs, monitoring, services, deployment... (TCP/IP)
2. interconnect Network : between compute nodes (com), between storage and compute node... (Portal4)

network bandwidth : ~100Gb ~15 GB
communication time : ~1ms
instruction time : ~1ns
10-100 messages by secondes

`Portal4` event : PTL_EQ_get, PTL_EQ_wait PTL_EQ_poll... (EQ is for Event Queue).

sandia `portal 4` (4.3) pdf with the specs.

- base on `Portals 4` to do message passing.
- support `MPI` (Message Passing Interface) and `PGAS` (Partitioned Global Address Space) new parallel programming languages.
  - send/receive
  - `RDMA` (Remote `DMA`) (Direct Memory Access).
- `SHMEM` : is a shared memory library from Cray (communication lib).
- `NIC` : Network Interface Card (a network card xD).
- `LME` List Management Engine.

`ASIC switch` (or `BXI switch`)
`ASIC NCI` (or `BXI NCI`)

Transmit Logic (TX).
Receive logic (RX).

`ASIP` (Application Specific Instruction set Processor).

<https://en.wikipedia.org/wiki/SerDes>

Put, Get and ME_Append.
