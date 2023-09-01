#include "ADT.h"

//Private Ptr for the Module Structured current working Info
static ADT_Module_t* ADT_Module_Ptr;

void createADT(ADT_Type_t type , void* pa)
{
    ADT_Module_Ptr = (ADT_Module_t*)malloc(sizeof (ADT_Module_t));
    if(QUEUE == type)
    {
        ADT_Module_Ptr->adtType = QUEUE;
        QueueInit((Queue*)pa);

    }
    else if(LIST == type)
    {
        ADT_Module_Ptr->adtType = LIST;
        ListInit((List*)pa);
    }
    return;
}

void addADTNode(uint32_t pos, void* pa, void*  pe)
{
    if(QUEUE == ADT_Module_Ptr->adtType)
    {
        enQueue((Queue*)pa, *(QEntry*)pe);

    }
    else if(LIST == ADT_Module_Ptr->adtType)
    {

        ListInsertNode(pos,(List*)pa, *(LEntry*)pe);
    }
    return;
}

void deleteADTNode(uint32_t pos, void* pa, void *pe)
{
        if(QUEUE == ADT_Module_Ptr->adtType)
    {
        deQueue((Queue*)pa, (QEntry*)pe);

    }
    else if(LIST == ADT_Module_Ptr->adtType)
    {

        ListDeleteNode(pos,(List*)pa, (LEntry*)pe);
    }
    return;
}

bool_t ADTEmpty(void* pa)
{
    bool_t result;
    if(QUEUE == ADT_Module_Ptr->adtType)
    {
        result = QueueEmpty((Queue*)pa);

    }
    else if(LIST == ADT_Module_Ptr->adtType)
    {

        result = ListEmpty((List*)pa);
    }
    return result;
}

bool_t ADTFull(void*  pa)
{
        bool_t result;
    if(QUEUE == ADT_Module_Ptr->adtType)
    {
        result = QueueFull((Queue*)pa);

    }
    else if(LIST == ADT_Module_Ptr->adtType)
    {

        result = ListFull((List*)pa);
    }
    return result;
}

uint32_t ADTSize(void*  pa)
{
        uint32_t result;
    if(QUEUE == ADT_Module_Ptr->adtType)
    {
        result = QueueSize((Queue*)pa);

    }
    else if(LIST == ADT_Module_Ptr->adtType)
    {

        result = ListSize((List*)pa);
    }
    return result;
}

void ADTDestroy(void* pa)
{
    if(QUEUE == ADT_Module_Ptr->adtType)
    {
        QueueDestroy((Queue*)pa);

    }
    else if(LIST == ADT_Module_Ptr->adtType)
    {

        ListDestroy((List*)pa);
    }
    return;
}

void ADTPrint(void* pa)
{
    if(QUEUE == ADT_Module_Ptr->adtType)
    {
        QueuePrint((Queue*)pa);

    }
    else if(LIST == ADT_Module_Ptr->adtType)
    {

        ListPrint((List*)pa);
    }
    return;
}

void ADTSort(void* pa, ADT_Sort_t sortOrder)
{
    //bubble sort
    if(QUEUE == ADT_Module_Ptr->adtType)
    {


    }
    else if(LIST == ADT_Module_Ptr->adtType)
    {
        if(ASCENDING == sortOrder)
        {
            //repeat until not swapped
            int swapped = TRUE;
            while(swapped)
            {
                swapped = FALSE;
                LNode* current = ((List*)pa)->head;
                LNode* next = current->next;

                while(next != NULL)
                {
                    if(current->entry.data > next->entry.data)
                    {
                        ListSwapNodes(&((List*)pa)->head, current->entry.data, next->entry.data);
                        swapped = TRUE;
                    }

                    current = next;
                    next = next->next;
                }
            }
        }
        else if(DESCENDING == sortOrder)
        {
            //repeat until not swapped
            int swapped = TRUE;
            while(swapped)
            {
                swapped = FALSE;
                LNode* current = ((List*)pa)->head;
                LNode* next = current->next;

                while(next != NULL)
                {
                    if(current->entry.data < next->entry.data)
                    {
                        ListSwapNodes(&((List*)pa)->head, current->entry.data, next->entry.data);
                        swapped = TRUE;
                    }

                    current = next;
                    next = next->next;
                }
            }

        }
    }
    return;
}

void* ADTSearch(void* pa, void*  pe)
{
    void* result = NULL;
    QNode* qResult = NULL;
    LNode* lResult = NULL;
    if(QUEUE == ADT_Module_Ptr->adtType)
    {


    }
    else if(LIST == ADT_Module_Ptr->adtType)
    {

        // Function to search for a specific value in a linked list
        lResult = ListSearch( &((List*)pa)->head, (LEntry*)pe);
        result = (LNode*)lResult;
    }
    return result;
}
