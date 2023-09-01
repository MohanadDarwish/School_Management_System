#include"Queue.h"

void QueueInit(Queue * pq)
{
    pq->front = NULL;
    pq->rear  = NULL;
    pq->size  = 0;
}

void enQueue(Queue * pq, QEntry e)
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

void deQueue(Queue * pq, QEntry *pe)
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

bool_t QueueEmpty(Queue * pq)
{
    return (!pq->front);// not equal null
}

bool_t QueueFull(Queue * pq)
{
    //return 0; //why??
    return( pq->rear == pq->front );
}

uint32_t QueueSize(Queue* pq)
{
    return(pq->size);
}

void QueueDestroy(Queue* pq)
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

void QueuePrint(Queue * pq)
{
    QNode *pn=pq->front;
    for(; pn; pn=pn->next)
    {
        printf("%d \n",pn->entry.data);
    }
}

sint32_t frontQueue(Queue* pq)
{
    return(pq->front->entry.data);
}

