/* puk_config.h.  Generated from puk_config.h.in by configure.  */
/* puk_config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Extension for bundles */
#define DSO_EXT ".so"

/* suffix for dynamic library names (usually ".so" on Unix systems) */
#define DYNLIB_EXT ".so"

/* prefix prepended to dynamic library names (usually "lib") */
#define DYNLIB_PREFIX "lib"

/* The gdb debugger */
#define GDB "/usr/bin/gdb"

/* have clock_gettime */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the declaration of `mach_absolute_time', and to 0
   if you don't. */
#define HAVE_DECL_MACH_ABSOLUTE_TIME 0

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if you have the <elf.h> header file. */
#define HAVE_ELF_H 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <expat.h> header file. */
#define HAVE_EXPAT_H 1

/* Define if you have the <ifaddrs.h> header file. */
#define HAVE_IFADDRS_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

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

/* have mach_absolute_time declaration */
/* #undef HAVE_MACH_ABSOLUTE_TIME */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* whether off64_t is defined in sys/types.h using _LARGEFILE64_SOURCE */
#define HAVE_OFF64_T /**/

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the <setjmp.h> header file. */
#define HAVE_SETJMP_H 1

/* whether socklen_t is defined in sys/socket.h */
#define HAVE_SOCKLEN_T /**/

/* Define if you have the <stdint.h> header file. */
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

/* Define if you have the <valgrind/valgrind.h> header file. */
#define HAVE_VALGRIND_H 1

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

/* enable Padico trace system */
/* #undef PADICO_TRACE_ON */

/* date of the build */
#define PUK_BUILD_STRING                                                     \
  "Puk-2022-05-31+5543edaf557ee223fceb198b010a16334576c386  (build Fri Feb " \
  "10 10:04:01 CET 2023)"

/* whether Puk is built in DEBUG */
/* #undef PUK_DEBUG */

/* whether we use GNU TM */
/* #undef PUK_ENABLE_GNU_TM */

/* enable memory profiling */
/* #undef PUK_ENABLE_PROFILE */

/* whether we use Intel RTM */
/* #undef PUK_ENABLE_RTM */

/* have clock_gettime */
#define PUK_HAVE_CLOCK_GETTIME 1

/* have mach_absolute_time */
/* #undef PUK_HAVE_MACH_ABSOLUTE_TIME */

/* Define if you have the <stdint.h> header file. */
#define PUK_HAVE_STDINT_H 1

/* Define if you have the <valgrind/valgrind.h> header file. */
#define PUK_HAVE_VALGRIND_H 1

/* Puk root install directory */
#define PUK_ROOT "/home/cgoedefr/soft/x86_64/"

/* whether we use transactional memory */
/* #undef PUK_USE_TRANSACTION */

/* [PUK] version as string */
#define PUK_VERSION_STRING \
  "Puk-2022-05-31+5543edaf557ee223fceb198b010a16334576c386 "

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

/* prefix prepended to symbols by the ABI (usually "_") */
#define SYMBOL_PREFIX ""

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