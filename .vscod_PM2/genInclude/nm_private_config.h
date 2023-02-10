/* include/nm_private_config.h.  Generated from nm_private_config.h.in by
 * configure.  */
/* include/nm_private_config.h.in.  Generated from configure.ac by autoheader.
 */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* suffix for dynamic library names (usually ".so" on Unix systems) */
#define DYNLIB_EXT ".so"

/* prefix prepended to dynamic library names (usually "lib") */
#define DYNLIB_PREFIX "lib"

/* Define to 1 if you have the declaration of `FI_CONTEXT', and to 0 if you
   don't. */
/* #undef HAVE_DECL_FI_CONTEXT */

/* Define to 1 if you have the declaration of `FI_CONTEXT2', and to 0 if you
   don't. */
/* #undef HAVE_DECL_FI_CONTEXT2 */

/* whether hwloc is present */
#define HAVE_HWLOC 1

/* whether libibverbs is present */
#define HAVE_IBVERBS 1

/* whether libibverbs contains symbols for implicit ODP */
#define HAVE_IBVERBS_IODP 1

/* whether libibverbs contains symbols for ODP */
#define HAVE_IBVERBS_ODP 1

/* whether libibverbs has ibv_query_device_ex() */
#define HAVE_IBV_QUERY_DEVICE_EX 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have the <lz4.h> header file. */
/* #undef HAVE_LZ4_H */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* whether off64_t is defined in sys/types.h using _LARGEFILE64_SOURCE */
#define HAVE_OFF64_T /**/

/* whether slurm pmi2 is present */
/* #undef HAVE_PMI2 */

/* whether slurm PMIx is present */
/* #undef HAVE_PMIX */

/* whether portals4 is present */
#define HAVE_PORTALS4 1

/* whether libpsm is present */
/* #undef HAVE_PSM */

/* whether libpsm2 is present */
/* #undef HAVE_PSM2 */

/* whether socklen_t is defined in sys/socket.h */
#define HAVE_SOCKLEN_T /**/

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* whether UCX is present */
#define HAVE_UCX 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* enable MadMPI */
#define MAD_MPI 1

/* date of the build */
#define NMAD_BUILD_STRING                                                     \
  "NewMadeleine-2022-05-31+5543edaf557ee223fceb198b010a16334576c386  (build " \
  "Fri Feb 10 10:04:21 CET 2023)"

/* GNU gfortran Fortran support */
#define NMAD_FORTRAN_TARGET_GFORTRAN 0

/* Intel ifort Fortran support */
/* #undef NMAD_FORTRAN_TARGET_IFORT */

/* no Fortran support */
/* #undef NMAD_FORTRAN_TARGET_NONE */

/* use hwloc */
#define NMAD_HWLOC 1

/* enable ROMIO MPI I/O */
/* #undef NMAD_MPI_ENABLE_ROMIO */

/* use PadicoTM as launcher */
#define NMAD_PADICOTM 1

/* use Pioman progression engine */
/* #undef NMAD_PIOMAN */

/* enable stats & profiling */
/* #undef NMAD_PROFILE */

/* interface with PukABI interposer */
/* #undef NMAD_PUKABI */

/* nmad install directory */
#define NMAD_ROOT "/home/cgoedefr/soft/x86_64"

/* enable sampling */
/* #undef NMAD_SAMPLING */

/* enable trace */
/* #undef NMAD_TRACE */

/* [NMAD] version as string */
#define NMAD_VERSION_STRING \
  "NewMadeleine-2022-05-31+5543edaf557ee223fceb198b010a16334576c386 "

/* sizeof INTEGER == 4 */
#define NM_FORTRAN_SIZEOF_INTEGER_4 1

/* sizeof INTEGER == 8 */
/* #undef NM_FORTRAN_SIZEOF_INTEGER_8 */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `ssize_t', as computed by sizeof. */
#define SIZEOF_SSIZE_T 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
#if defined __BIG_ENDIAN__
#define WORDS_BIGENDIAN 1
#endif
#else
#ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
#endif
#endif

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */