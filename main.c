#include <stdio.h>
#include <stdlib.h>

#include "DataTypes.h"
#include "ADT.h"

int main()
{
    Queue myQ;
    QEntry Qdata;

    createQueue(&myQ);

    Qdata.data=5;
    enqueue(&myQ, Qdata);
    Qdata.data=7;
    enqueue(&myQ, Qdata);
    Qdata.data=20;
    enqueue(&myQ, Qdata);
    Qdata.data=44;
    enqueue(&myQ, Qdata);
    Qdata.data=50;
    enqueue(&myQ, Qdata);
    printQueue(&myQ);


    return 0;
}
