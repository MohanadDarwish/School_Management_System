#include "SMS.h"
void Main_Menu()
{
    MenuInit((const sint8_t*)"* School Management Main Menu *",CYAN);
    MenuAddLn((sint8_t*)"=================================================");
    MenuAddLn((sint8_t*)"## Welcome to Maadi Canal Language School!##");
    MenuAddLn((sint8_t*)"=================================================");
    MenuAddLn((sint8_t*)"[1] Add New Student.");
    MenuAddLn((sint8_t*)"[2] Delete old Student.");
    MenuAddLn((sint8_t*)"[3] List All students info Table.");
    MenuAddLn((sint8_t*)"[4] Edit Student Info by ID.");
    MenuAddLn((sint8_t*)"[5] Rank All Students in Computer Science.");
    MenuAddLn((sint8_t*)"[6] Input Students Score.");
    MenuAddLn((sint8_t*)"                                                 ");
    MenuAddLn((sint8_t*)"[Number+ENTER]:Number then Enter    [ESC]:Return.");
    MenuAddLn((sint8_t*)"                                                 ");
    MenuAddLn((sint8_t*)"=================================================");
    MenuPrint();
    sint8_t scanbuff[50]={0};
    MenuScanLn(scanbuff,NULL);
    MenuPrintScannedLn();
    return;
}
void New_Student()
{
    return;
}
void Delete_Student()
{
    return;
}
/*********************************/
void Student_List()
{
    return;
}
void Student_Edit()
{
    return;
}
//Students_ScoreEntry
void Student_Score()
{
    return;
}
//Students_RankPrint
void Student_Rank()
{
    return;
}
