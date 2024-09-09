/*
 ============================================================================
 Name        : Platform_Types
 Author      : Abdullah ghazal
 ============================================================================
 */


#ifndef PALTFORM_TYPES_H_
#define PALTFORM_TYPES_H_

#include <stdint.h>

#define CPU_TYPE_8  8
#define CPU_TYPE_16 16
#define CPU_TYPE_32 32
#define CPU_TYPE_64 64 
/************************************/
#define CPU_TYPE   (CPU_TYPE_32)
/************************************/


#if (CPU_TYPE == CPU_TYPE_8 )
typedef unsigned char           boolean;
typedef char                    char_t;
typedef unsigned char           uint8;
typedef unsigned short          uint16;
typedef unsigned long           uint32;
typedef signed char             sint8;
typedef signed short            sint16;
typedef signed long             sint32;
typedef volatile int8_t         vint8_t;
typedef volatile uint8_t        vuint8_t;
typedef volatile int16_t        vint16_t;
typedef volatile uint16_t       vuint16_t;


#elif (CPU_TYPE == CPU_TYPE_16)
typedef unsigned char           boolean;
typedef char                    char_t;
typedef unsigned char           uint8;
typedef unsigned short          uint16;
typedef unsigned long           uint32; 
typedef unsigned long long      uint64;
typedef signed char             sint8;
typedef signed short            sint16;
typedef signed long             sint32;
typedef signed long long        sint64;
typedef float                   float32;
typedef double                  float64;
typedef volatile int8_t         vint8_t;
typedef volatile uint8_t        vuint8_t;
typedef volatile int16_t        vint16_t;
typedef volatile uint16_t       vuint16_t;


#elif (CPU_TYPE == CPU_TYPE_32)
typedef unsigned char           boolean;
typedef char                    char_t;
typedef unsigned char           uint8;
typedef unsigned short          uint16;
typedef unsigned long           uint32;
typedef unsigned long long      uint64;
typedef signed char             sint8;
typedef signed short            sint16;
typedef signed long             sint32;
typedef signed long long        sint64;
typedef float                   float32;
typedef double                  float64;
typedef volatile int8_t         vint8_t;
typedef volatile uint8_t        vuint8_t;
typedef volatile int16_t        vint16_t;
typedef volatile uint16_t       vuint16_t;


#elif (CPU_TYPE == CPU_TYPE_64)
typedef unsigned char           boolean;
typedef char                    char_t;
typedef unsigned char           uint8;
typedef unsigned short          uint16;
typedef unsigned long           uint32;
typedef unsigned long long      uint64;
typedef signed char             sint8;
typedef signed short            sint16;
typedef signed long             sint32;
typedef signed long long        sint64;
typedef float                   float32;
typedef double                  float64;
typedef volatile int8_t         vint8_t;
typedef volatile uint8_t        vuint8_t;
typedef volatile int16_t        vint16_t;
typedef volatile uint16_t       vuint16_t;
#endif

#endif /*PALTFORM_TYPES_H_*/