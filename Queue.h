#ifndef _QUEUE_H_
#define _QUEUE_H_
/**
* Layer 2 Module
*
* Desc: Queue Abstract Data structure
*
* Author: Mohanad Darwish
* Date: 30/8/2023
* version: 1.0
*/

#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
#include "DataTypes.h"

typedef struct qentry
{
    int data;
}QEntry;

typedef struct qnode
{
    QEntry entry;
    struct qnode *next;

} QNode;

typedef struct queue
{
    QNode *front;
    QNode *rear;
    sint32_t size;//queue size
}Queue;

//Functions Prototype

void createQueue(Queue * pq);

void enqueue(Queue* pq, QEntry  e);
void dequeue(Queue* pq, QEntry *pe);
bool_t QEmpty(Queue* pq);
bool_t QFull(Queue*  pq);
sint32_t  QSize(Queue*  pq);
void QClear(Queue* pq);

void printQueue(Queue* pq);
sint32_t  frontQueue(Queue* pq);

#endif // _QUEUE_H_
