/* Core/PadicoTM_config.h.  Generated from PadicoTM_config.h.in by configure. */
/* Core/PadicoTM_config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* suffix for dynamic library names (usually ".so" on Unix systems) */
#define DYNLIB_EXT ".so"

/* prefix prepended to dynamic library names (usually "lib") */
#define DYNLIB_PREFIX "lib"

/* The gdb debugger */
#define GDB "/usr/bin/gdb"

/* Define if you have the <bzlib.h> header file. */
/* #undef HAVE_BZLIB_H */

/* Define if you have the <graphviz/cgraph.h> header file. */
/* #undef HAVE_CGRAPH_H */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

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

/* Define if you have the <ifaddrs.h> header file. */
#define HAVE_IFADDRS_H 1

/* Define if you have the <sys/inotify.h> header file. */
#define HAVE_INOTIFY_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have the <libssh2.h> header file. */
/* #undef HAVE_LIBSSH2_H */

/* Define if you have the <linux/ethtool.h> header file. */
#define HAVE_LINUX_ETHTOOL_H 1

/* Define if you have the <linux/if.h> header file. */
#define HAVE_LINUX_IF_H 1

/* Define if you have the <linux/netlink.h> header file. */
#define HAVE_LINUX_NETLINK_H 1

/* Define if you have the <linux/rtnetlink.h> header file. */
#define HAVE_LINUX_RTNETLINK_H 1

/* Define if you have the <linux/sockios.h> header file. */
#define HAVE_LINUX_SOCKIOS_H 1

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

/* Define if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* whether portals4 is present */
#define HAVE_PORTALS4 1

/* whether libpsm is present */
/* #undef HAVE_PSM */

/* whether libpsm2 is present */
/* #undef HAVE_PSM2 */

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

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

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to 1 if you have the `__fxstat' function. */
#define HAVE___FXSTAT 1

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

/* date of the build */
#define PADICOTM_BUILD_STRING                                                 \
  "PadicoTM-2022-05-31+5543edaf557ee223fceb198b010a16334576c386  (build Fri " \
  "Feb 10 10:04:07 CET 2023)"

/* PadicoTM root install directory */
#define PADICOTM_ROOT "/home/cgoedefr/soft/x86_64/"

/* [PADICOTM] version as string */
#define PADICOTM_VERSION_STRING \
  "PadicoTM-2022-05-31+5543edaf557ee223fceb198b010a16334576c386 "

/* use argobots threads */
/* #undef PADICO_ABT */

/* enable Cross-Memory Attach */
#define PADICO_HAVE_CMA_FUNCTIONS 1

/* use Marcel threads */
/* #undef PADICO_MARCEL */

/* use pthreads */
#define PADICO_PTHREAD 1

/* enable Padico trace system */
/* #undef PADICO_TRACE_ON */

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

/* X Window terminal emulator */
#define XTERM "/usr/bin/xterm"

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
