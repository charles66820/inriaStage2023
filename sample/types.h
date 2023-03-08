#ifndef CUSTOM_TYPES_H
#define CUSTOM_TYPES_H 1

#define PORTABLE

#ifdef PORTABLE
#include <linux/types.h>

typedef __s8 s8;
typedef __s16 s16;
typedef __s32 s32;
typedef __s64 s64;

typedef __u8 u8;
typedef __u16 u16;
typedef __u32 u32;
typedef __u64 u64;
#else
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
#endif /* PORTABLE */

typedef s8 int8;
typedef s16 int16;
typedef s32 int32;
typedef s64 int64;

typedef u8 uint8;
typedef u16 uint16;
typedef u32 uint32;
typedef u64 uint64;

#endif /* CUSTOM_TYPES_H */
