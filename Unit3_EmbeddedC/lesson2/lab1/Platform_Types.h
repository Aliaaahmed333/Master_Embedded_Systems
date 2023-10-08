/*
 * Platform_Types.h
 *
 *  Created on: ١٧‏/٠٩‏/٢٠٢٣
 *      Author: hp
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include "StandardTypes.h"


#ifndef _Bool
#define _Bool unsigned char
#endif

#define CPU_TYPE              CPU_TYPE_32
#define CPU_BIT_ORDER         MSB_FIRST
#define CPU_BYTE_ORDER        HIGH_BYTE_FIRST

#ifndef   FALSE
#define   FALSE         (boolean)false
#endif

#ifndef   TRUE
#define   TRUE         (boolean)true
#endif

typedef _Bool         boolean;
typedef int8_t        s8;
typedef uint8_t       u8;
typedef char          char_t;
typedef int16_t       s16;
typedef uint16_t      u16;
typedef int32_t       s32;
typedef uint32_t      u32;
typedef int64_t       s64;
typedef uint64_t      u64;

typedef volatile int8_t    vint8_t;
typedef volatile uint8_t   vuint8_t;

typedef volatile int16_t   vint16_t;
typedef volatile uint16_t   vuint16_t;

typedef volatile int32_t    vint32_t;
typedef volatile uint32_t   vuint32_t;

typedef volatile int64_t    vint64_t;
typedef volatile uint64_t   vuint64_t;


#endif /* PLATFORM_TYPES_H_ */
