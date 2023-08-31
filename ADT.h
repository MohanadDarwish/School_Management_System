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
    struct ADT_Node *prev;
    ADT_Entry_t data;
    sint32_t size;//ADT structure size
}ADT_Node_t;

typedef struct ADT_structure
{
    ADT_Node_t *front;
    ADT_Node_t *rear;
    int size;//queue size
}ADT_Structure_t;

void createADT(ADT_Type_t type , ADT_Structure_t* pa);

void addADTNode(ADT_Structure_t* pq, ADT_Entry_t  e);

void removeADTNode(ADT_Structure_t* pa, ADT_Entry_t *pe);

bool_t ADTEmpty(ADT_Structure_t* pa);

bool_t ADTFull(ADT_Structure_t*  pa);

sint32_t ADTSize(ADT_Structure_t*  pa);

void ADTClear(ADT_Structure_t* pa);

void ADTPrint(ADT_Structure_t* pa);

sint32_t ADTFrontElement(ADT_Structure_t* pa);

void ADTSort(ADT_Structure_t* pa, ADT_Sort_t s);

ADT_Node_t* ADTSearch(ADT_Structure_t* pa, ADT_Entry_t  e );
#endif // ADT_H_INCLUDED
