#include "Menu.h"
static Menu_t M;

error_t MenuInit(const sint8_t* mTitle, Menu_Color_t mColor)
{
    error_t status = FAILURE;
    memset(M.menuTitle,0,LINE_LENGTH);
    memset(M.inputBuffer,0,LINE_LENGTH);
    memset(M.menuLnsBufffer,0,LINE_LENGTH*LINE_COUNT);

    if( strlen((const char*)mTitle)< LINE_LENGTH )
    {
        memcpy((char*)M.menuTitle,(const char*)mTitle, LINE_LENGTH);
        status = SUCCESS;
    }
    else
    {
        status = FAILURE;
    }
    M.menuColor = mColor;
    M.menuAddedLnCount = 0;
    return status;
}

error_t MenuAddLn(uint8_t* inputStr)
{
    error_t status = FAILURE;
    if(M.menuAddedLnCount < LINE_COUNT)
    {
        memcpy((char*)M.menuLnsBufffer[M.menuAddedLnCount],(const char*)inputStr, LINE_LENGTH);
        M.menuAddedLnCount++;
        status = SUCCESS;
    }
    else
    {
       status = FAILURE;
    }
    return status;
}
void MenuScanLn(sint8_t* inputStr, void* input)
{

    fgets((char*)M.inputBuffer,LINE_LENGTH,stdin);



    return;
}
void MenuPrintScannedLn(void)
{
    puts((const char*)M.inputBuffer);
    return;
}

void MenuPrint(void)
{
    int i=0;

    for(;i<=LINE_COUNT;i++)
    {
        switch (M.menuColor)
        {
            case RED:
                if(0 == i)
                {
                    printf(ANSI_COLOR_RED "%s" ANSI_COLOR_RESET "\n",M.menuTitle);
                }
                printf(ANSI_COLOR_RED "%s" ANSI_COLOR_RESET "\n",M.menuLnsBufffer[i]);
            break;
            case GREEN:
                if(0 == i)
                {
                    printf(ANSI_COLOR_GREEN "%s" ANSI_COLOR_RESET "\n",M.menuTitle);
                }
                printf(ANSI_COLOR_GREEN "%s" ANSI_COLOR_RESET "\n",M.menuLnsBufffer[i]);
            break;
            case YELLOW:
                if(0 == i)
                {
                    printf(ANSI_COLOR_YELLOW "%s" ANSI_COLOR_RESET "\n",M.menuTitle);
                }
                printf(ANSI_COLOR_YELLOW "%s" ANSI_COLOR_RESET "\n",M.menuLnsBufffer[i]);
            break;
            case BLUE:
                if(0 == i)
                {
                    printf(ANSI_COLOR_BLUE "%s" ANSI_COLOR_RESET "\n",M.menuTitle);
                }
                printf(ANSI_COLOR_BLUE "%s" ANSI_COLOR_RESET "\n",M.menuLnsBufffer[i]);
            break;
            case MAGENTA:
                if(0 == i)
                {
                    printf(ANSI_COLOR_MAGENTA "%s" ANSI_COLOR_RESET "\n",M.menuTitle);
                }
                printf(ANSI_COLOR_MAGENTA "%s" ANSI_COLOR_RESET "\n",M.menuLnsBufffer[i]);
            break;
            case CYAN:
                if(0 == i)
                {
                    printf(ANSI_COLOR_CYAN "%s" ANSI_COLOR_RESET "\n",M.menuTitle);
                }
                printf(ANSI_COLOR_CYAN "%s" ANSI_COLOR_RESET "\n",M.menuLnsBufffer[i]);
            break;
            default:
                printf("Undefined Color Entered!\n");
            break;
        }
    }
    return;
}

//void setMenuOutBuff();
//void getMenuOutBuff();

//void setMenuInBuff();
//void getMenuInBuff();

//void setMenuMenuLnCount();
//void getMenuMenuLnCount();
