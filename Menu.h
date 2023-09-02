#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
/**
* Layer 2 Module
*
* Desc: Menu Module that responibile for printing and managing Menus
*
* Author: Mohanad Darwish
* Date: 30/8/2023
* version: 1.0
*/
#include "DataTypes.h"
#define LINE_COUNT 20
#define LINE_LENGTH 50

typedef enum menu_color
{
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN

}Menu_Color_t;

typedef struct menu
{
    sint8_t menuTitle[LINE_LENGTH];
    //buffer for MenuScanLn
    sint8_t inputBuffer[LINE_LENGTH];
    //const uint8_t  menuLnCount;
    sint8_t menuLnsBufffer[LINE_COUNT][LINE_LENGTH];
    Menu_Color_t menuColor;
    uint8_t menuAddedLnCount;

}Menu_t;

error_t MenuInit(const sint8_t* mTitle, Menu_Color_t mColor);
error_t MenuAddLn(sint8_t* outputStr);
void MenuScanLn(sint8_t* inputStr, void* input);
void MenuPrintScannedLn(void);
void MenuPrint(void);
//void setMenuOutBuff();
//void getMenuOutBuff();

//void setMenuInBuff();
//void getMenuInBuff();

//void setMenuMenuLnCount();
//void getMenuMenuLnCount();

/*Module Static Functions*/

#endif // MENU_H_INCLUDED
