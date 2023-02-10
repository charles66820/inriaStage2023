/* include/nm_config.h.  Generated from nm_config.h.in by configure.  */
/*
 * NewMadeleine
 * Copyright (C) 2011-2021 (see AUTHORS file)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 */

/** @file public config for nmad.
 * This file contains only prefixed symbols and may be safely
 * installed and exposed in the public API.
 */

/* enable Mad-MPI */
#define MAD_MPI 1

/* GNU gfortran Fortran support */
#define NMAD_FORTRAN_TARGET_GFORTRAN 0

/* Intel ifort Fortran support */
/* #undef NMAD_FORTRAN_TARGET_IFORT */

/* no Fortran support */
/* #undef NMAD_FORTRAN_TARGET_NONE */

/* enable sampling */
/* #undef NMAD_SAMPLING */

/* nmad install path */
#define NMAD_ROOT "/home/cgoedefr/soft/x86_64"

/* include ROMIO in mpi.h */
/* #undef NMAD_MPI_ENABLE_ROMIO */

/* build nmad with pioman */
/* #undef NMAD_PIOMAN */

/* build nmad with hwloc */
#define NMAD_HWLOC 1

/* #undef NMAD_PUKABI */

#define NM_FORTRAN_SIZEOF_INTEGER_4 1

/* #undef NM_FORTRAN_SIZEOF_INTEGER_8 */

#if __INTELLISENSE__
#pragma diag_suppress 1094
#endif