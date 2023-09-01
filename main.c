/**
* Layer 0 Module
*
* Desc: Main Entry Point of the program main() that has the super Loop While(1)
*
* Author: Mohanad Darwish
* Date: 30/8/2023
* version: 1.0
*/
#include <stdio.h>
#include <stdlib.h>

#include "DataTypes.h"
#include "ADT.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"

#define ANSI_BACKGROUND_COLOR_BLUE "\x1b[44m"
#define BCKGRD_COL_CUSTOM_BLUE  "\e[48;2;0;0;200m"

#define ANSI_COLOR_RESET   "\x1b[0m"
int main()
{
/**
    printf(ANSI_BACKGROUND_COLOR_BLUE);
    printf(BCKGRD_COL_CUSTOM_BLUE);
    system ("color 90");

    printf(ANSI_COLOR_RED     "This text is RED!"     ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_GREEN   "This text is GREEN!"   ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_YELLOW  "This text is YELLOW!"  ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_BLUE    "This text is BLUE!"    ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_MAGENTA "This text is MAGENTA!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_CYAN    "This text is CYAN!"    ANSI_COLOR_RESET "\n");
*/

    //Queue myQ;
    List myL;
    //QEntry Qdata;
    ADT_Entry_t Ldata;
    //createQueue(&myQ);
    //ListInit(&myL);
    createADT(LIST, &myL);
    while(1)
    {
        //Qdata.data=5;
        Ldata.data=22;
        //enqueue(&myQ, Qdata);
        //ListInsertNode(0,&myL,Ldata);
        addADTNode(0,&myL,&Ldata);


        //Qdata.data=7;
        Ldata.data=33;
        //enqueue(&myQ, Qdata);
        //ListInsertNode(0,&myL,Ldata);
        addADTNode(0,&myL,&Ldata);

        //Qdata.data=20;
        Ldata.data=44;
        //enqueue(&myQ, Qdata);
        //ListInsertNode(0,&myL,Ldata);
        addADTNode(0,&myL,&Ldata);

        //Qdata.data=44;
        Ldata.data=55;
        //enqueue(&myQ, Qdata);
        //ListInsertNode(0,&myL,Ldata);
        addADTNode(0,&myL,&Ldata);

        //Qdata.data=50;
        Ldata.data=66;
        //enqueue(&myQ, Qdata);
        //ListInsertNode(0,&myL,Ldata);
        addADTNode(0,&myL,&Ldata);

        //deleteADTNode(4,&myL,&Ldata);

        //ListSwapNodes(&myL.head, 22 , 44);

        ADTSort(&myL,ASCENDING);

        //printQueue(&myQ);
        //ListPrint(&myL);
        ADTPrint(&myL);

        Ldata.data=66;
        LNode* r = (LNode*)ADTSearch(&myL, &Ldata);
        printf("r->entry.data found := %lu\n",r->entry.data);

        ADTSort(&myL,DESCENDING);
        ADTPrint(&myL);

        printf("List Size is = %lu\n", ListSize(&myL));
        //QClear(&myQ);
        ListDestroy(&myL);

        getchar();

    }




    return 0;
}
