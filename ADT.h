#ifndef ADT_H_INCLUDED
#define ADT_H_INCLUDED
/**
* Layer 1 Module
*
* Desc: ADT stands for Abstract Data Type
*
* Author: Mohanad Darwish
* Date: 30/8/2023
* version: 1.0
*/

#include "DataTypes.h"
#include "Stack.h"
#include "Queue.h"
#include "List.h"
typedef enum ADT_Type
{
    STACK,
    QUEUE,
    LIST,
    TREE
}ADT_Type_t;

typedef enum ADT_Sort
{
    ASCENDING,
    DESCENDING
}ADT_Sort_t;

typedef struct ADT_Entry
{
    sint32_t data;
}ADT_Entry_t;

typedef struct ADT_Node
{
    struct ADT_Node *next;
    ADT_Entry_t data;
    sint32_t size;//ADT structure size
}ADT_Node_t;

typedef struct ADT_module
{
    ADT_Type_t adtType;
    void* pADT;

}ADT_Module_t;

void createADT(ADT_Type_t type , void* pa);

void addADTNode(uint32_t pos, void* pa, void*  pe);

void deleteADTNode(uint32_t pos, void* pa, void* pe);

bool_t ADTEmpty(void* pa);

bool_t ADTFull(void*  pa);

uint32_t ADTSize(void*  pa);

void ADTDestroy(void* pa);

void ADTPrint(void* pa);

void ADTSort(void* pa, ADT_Sort_t sortOrder);

void* ADTSearch(void* pa, void*  pe);

#endif // ADT_H_INCLUDED
