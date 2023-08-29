#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    int size;//queue size
}Queue;

//Functions Prototype

void createQueue(Queue * pq);

void enqueue(Queue* pq, QEntry  e);
void dequeue(Queue* pq, QEntry *pe);
bool QEmpty(Queue* pq);
bool QFull(Queue*  pq);
int  QSize(Queue*  pq);
void QClear(Queue* pq);

void printQueue(Queue* pq);
int  frontQueue(Queue* pq);

#endif // _QUEUE_H_
