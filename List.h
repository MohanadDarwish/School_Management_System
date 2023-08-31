#ifndef _LIST_H_
#define _LIST_H_
/**
* Layer 2 Module
*
* Desc: List Abstract Data structure
*
* Author: Mohanad Darwish
* Date: 30/8/2023
* version: 1.0
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "DataTypes.h"

typedef struct listentry
{
    uint32_t data;
}LEntry;

typedef struct listnode
{
    LEntry          entry;
    struct listnode *next;

} LNode;

typedef struct list
{
    LNode *head;//head
    uint32_t   size;//queue size
}List;

//Functions Prototype

void ListInit(List * pl);
bool_t ListEmpty(List* pl);
bool_t ListFull(List*  pl);
uint32_t  ListSize(List*  pl);


void ListDestroy(List* pl);
void ListGoToNode(List* pl, void(*ReturnEntryCB)(LEntry));

error_t ListInsertNode(uint32_t pos, List* pl, LEntry  e);
void ListDeleteNode(uint32_t pos, List* pl, LEntry *pe);

void ListReadNode(uint32_t pos, List * pl, LEntry *pe);
void ListReplaceNode(uint32_t pos, List * pl, LEntry *pe);

void ListPrint(List* pl);


#endif // _LIST_H_
