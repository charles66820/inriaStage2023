/* Puk-config.h.  Generated from Puk-config.h.in by configure.  */
/** @file
 * @brief Config file for Puk. May be safely installed
 * and included in applications, since all symbols are prefixed.
 */

#ifndef PUK_CONFIG_H
#define PUK_CONFIG_H

#define PUK_HAVE_VALGRIND_H 1

#define PUK_HAVE_STDINT_H 1

/** whether Puk is built in DEBUG mode (cannot rely on compilation-time defines
 * because of inlining) */
/* #undef PUK_DEBUG */

#define PUK_HAVE_CLOCK_GETTIME 1

/* #undef PUK_HAVE_MACH_ABSOLUTE_TIME */

/** whether to enable transactions in lfqueues */
/* #undef PUK_USE_TRANSACTION */

/** support for GNU Transactional Memory */
/* #undef PUK_ENABLE_GNU_TM */

/** support for Intel RTM */
/* #undef PUK_ENABLE_RTM */

/** enable memory profiling */
/* #undef PUK_ENABLE_PROFILE */

#endif /* PUK_CONFIG_H */