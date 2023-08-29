#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct lentry
{
    int data;
}LEntry;

typedef struct lnode
{
    LEntry entry;
    struct lnode *next;

} LNode;

typedef struct list
{
    LNode *front;
    LNode *rear;
    int size;//queue size
}List;

//Functions Prototype

void createList(List * pl);

void insertNode(List* pl, LEntry  e);
void deleteNode(List* pl, LEntry *pe);
bool LEmpty(List* pl);
bool LFull(List*  pl);
int  LSize(List*  pl);
void LClear(List* pl);

void printList(List* pl);
int  frontList(List* pl);

#endif // _LIST_H_
