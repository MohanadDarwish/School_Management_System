#ifndef DATATYPES_H_INCLUDED
#define DATATYPES_H_INCLUDED
/**
* Layer 0 Module
*
* Desc: DataTypes is an Type Abstraction for The project
*
* Author: Mohanad Darwish
* Date: 30/8/2023
* version: 1.0
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"

#define ANSI_BACKGROUND_COLOR_BLUE "\x1b[44m"
#define BCKGRD_COL_CUSTOM_BLUE  "\e[48;2;0;0;200m"

#define ANSI_COLOR_RESET   "\x1b[0m"

typedef signed long long sint64_t;
typedef unsigned long long uint64_t;

typedef signed long sint32_t;
typedef unsigned long uint32_t;

typedef signed short sint16_t;
typedef unsigned short uint16_t;

typedef signed char sint8_t;
typedef unsigned char uint8_t;

typedef float float32_t;
typedef double float64_t;

typedef enum boolean
{
    FALSE,
    TRUE
}bool_t;

typedef enum error_message
{
    FAILURE = -1,
    SUCCESS =  0

}error_t;

#endif // DATATYPES_H_INCLUDED
