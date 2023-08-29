#ifndef DATATYPES_H_INCLUDED
#define DATATYPES_H_INCLUDED

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
    SUCCESS,
    FAILURE
}error_t;






#endif // DATATYPES_H_INCLUDED
