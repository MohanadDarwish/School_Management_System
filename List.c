#include"List.h"

void createList(List * pl)
{
    pl->front = NULL;
    pl->rear  = NULL;
    pl->size  = 0;
}

void insertNode(List * pl, LEntry e)
{
    LNode* pn      = (LNode*)malloc(sizeof(LNode*));
    if(pn)
    {
        pn->next      = NULL;
        pn->entry     = e;
        if(!pl->rear)//special case the queue is already empty
        {
            pl->front  = pn;
        }
        else
        {
            pl->rear->next = pn;
        }
        pl->rear       = pn;
        pl->size++;
    }
    else
    {
        return;
    }

}

void deleteNode(List * pl, LEntry *pe)
{
    LNode *pn = pl -> front;
    *pe       = pn->entry;
    pl->front = pn->next;
    free(pn);
    if(!pl->front)//special case for last node remaining
    {
        pl->rear = NULL;
    }
    pl->size--;
}

bool LEmpty(List * pl)
{
    return (!pl->front);// not equal null
}

bool LFull(List * pl)
{
    //return 0; //why??
    return( pl->rear == pl->front );
}

int LSize(List* pl)
{
    return(pl->size);
}

void LClear(List* pl)
{
    while(pl->front)
    {
        pl->rear = pl->front->next;
        free(pl->front);
        pl->front= pl->rear;
    }
    pl->size = 0;
    return;
}

void printList(List * pl)
{
    LNode *pn=pl->front;
    for(; pn; pn=pn->next)
    {
        printf("%d \n",pn->entry.data);
    }
}

int frontList(List* pl)
{
    return(pl->front->entry.data);
}

