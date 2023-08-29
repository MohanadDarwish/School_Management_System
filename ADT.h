#ifndef ADT_H_INCLUDED
#define ADT_H_INCLUDED
/**ADT stands for Abstract Data Type*/

#include "DataTypes.h"
//#include " Stack.h"
#include "Queue.h"
#include "List.h"
typedef enum ADT_Type
{
    STACK,
    QUEUE,
    LIST,
    TREE
}ADT_Type_t;

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

void createADT(ADT_Type_t type , ADT_Node_t* pa);

void addADTNode(ADT_Node_t* pq, ADT_Entry_t  e);

void removeADTNode(ADT_Node_t* pa, ADT_Entry_t *pe);

bool ADTEmpty(ADT_Node_t* pa);

bool ADTFull(ADT_Node_t*  pa);

sint32_t ADTSize(ADT_Node_t*  pa);

void ADTClear(ADT_Node_t* pa);

void ADTPrint(ADT_Node_t* pa);

sint32_t ADTFrontElement(ADT_Node_t* pa);

#endif // ADT_H_INCLUDED
