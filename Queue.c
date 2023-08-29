#include"Queue.h"

void createQueue(Queue * pq)
{
    pq->front = NULL;
    pq->rear  = NULL;
    pq->size  = 0;
}

void enqueue(Queue * pq, QEntry e)
{
    QNode* pn      = (QNode*)malloc(sizeof(QNode*));
    if(pn)
    {
        pn->next      = NULL;
        pn->entry     = e;
        if(!pq->rear)//special case the queue is already empty
        {
            pq->front  = pn;
        }
        else
        {
            pq->rear->next = pn;
        }
        pq->rear       = pn;
        pq->size++;
    }
    else
    {
        return;
    }

}

void dequeue(Queue * pq, QEntry *pe)
{
    QNode *pn = pq -> front;
    *pe       = pn->entry;
    pq->front = pn->next;
    free(pn);
    if(!pq->front)//special case for last node remaining
    {
        pq->rear = NULL;
    }
    pq->size--;
}

bool QEmpty(Queue * pq)
{
    return (!pq->front);// not equal null
}

bool QFull(Queue * pq)
{
    //return 0; //why??
    return( pq->rear == pq->front );
}

int QSize(Queue* pq)
{
    return(pq->size);
}

void QClear(Queue* pq)
{
    while(pq->front)
    {
        pq->rear = pq->front->next;
        free(pq->front);
        pq->front= pq->rear;
    }
    pq->size = 0;
    return;
}

void printQueue(Queue * pq)
{
    QNode *pn=pq->front;
    for(; pn; pn=pn->next)
    {
        printf("%d \n",pn->entry.data);
    }
}

int frontQueue(Queue* pq)
{
    return(pq->front->entry.data);
}

