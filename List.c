#include"List.h"

void ListInit(List * pl)
{
    pl->head = NULL;
    pl->size  = 0;
}
bool_t ListEmpty(List * pl)
{
    return (pl->size == 0);// not equal zero
    //or return (!pl->head);
}

bool_t ListFull(List * pl)
{
    return 0; //why??
    //return( pl->head != NULL);
}

uint32_t ListSize(List* pl)
{
    return(pl->size);
}

/*******************************************/

void ListDestroy(List* pl)
{
    LNode *tmp;
    while(pl->head)
    {
        tmp = pl->head->next;
        free(pl->head);
        pl->head = tmp;
    }
    pl->size = 0;
    return;
}

void ListTraverse(List* pl, void(*ReturnEntryCB)(LEntry))
{
    LNode *pn = pl->head;
    /*while p is not null list is still not finished
    *move one step closer to end of list*/
    while(pn)
    {
        (*ReturnEntryCB)(pn->entry);
        pn = pn->next;
    }
    return;
}

/*******************************************/

error_t ListInsertNode(uint32_t pos, List * pl, LEntry e)
{
    int i=0;
    error_t status = FAILURE;
    LNode *tmp = NULL;
    LNode* pn = (LNode*)malloc(sizeof(LNode));
    if(pn)
    {
        pn->entry = e;
        pn->next  = NULL;

        /*will work also for head equals NULL*/
        if(0==pos)
        {
            pn->next = pl->head;
            pl->head = pn;
        }
        else
        {
            for(tmp = pl->head; i<pos-1; i++)
            {
                tmp = tmp->next;
            }
            /*now tmp is standing in position pos-1
             before the node that we want to insert before*/
            pn->next  = tmp->next;
            tmp->next = pn;
        }
        pl->size++;
        status = SUCCESS;
    }
    return status;
}

/*Pre condition: List is not Empty*/
void ListDeleteNode(uint32_t pos, List * pl, LEntry *pe)
{
    int i=0;
    LNode *tmp_pos_0 = NULL;
    LNode *tmp_pos_n = NULL;

    if(0 == pos)
    {
        /*return the deleted entry value */
        *pe = pl->head->entry;
        /*make tmp0 points to head->next*/
        tmp_pos_0 = pl->head->next;
        /*free pl->head as we have the ->next of it in tmp0*/
        free(pl->head);
        /*reassign head from null to tmp0*/
        pl->head = tmp_pos_0;
    }
    else
    {
        for(tmp_pos_n = pl->head; i<pos-1; i++)
        {
            tmp_pos_n = tmp_pos_n->next;
        }
        /*return the deleted entry value */
        *pe = tmp_pos_n->next->entry;
        /*make tmp0 points to head->next*/
        tmp_pos_0 = tmp_pos_n->next->next;
        /*free pl->head as we have the ->next of it in tmp0*/
        free(tmp_pos_n->next);
        /*reassign head from null to tmp0*/
        tmp_pos_n->next = tmp_pos_0;
    }
    pl->size--;

    return;
}


/*******************************************/

void ListReadNode(uint32_t pos, List * pl, LEntry *pe)
{
    int i = 0;
    LNode *tmp = NULL;
    for(tmp=pl->head; i<pos; i++)
    {
     tmp = tmp->next;
    }
    *pe = tmp->entry;
    return;
}
void ListReplaceNode(uint32_t pos, List * pl, LEntry *pe)
{
    int i = 0;
    LNode *tmp =pl->head;
    for(; i<pos; i++)
    {
     tmp = tmp->next;
    }
    tmp->entry = *pe;
    return;
}

/*******************************************/


void ListPrint(List * pl)
{
    LNode *pn=pl->head;
    for(; pn; pn=pn->next)
    {
        printf("%lu \n",pn->entry.data);
    }
}


