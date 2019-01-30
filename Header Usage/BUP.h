#ifndef BUP
#define BUP

void printBup(char*bupFileName)
{
    FILE*fp=fopen(bupFileName,"r");
    int i,j;
    char c;
    int colorCharCode[9][3]={{178,15,14},{177,15,14},{177,7,14},{219,15,0},{219,7,0},{177,8,0},{219,0,0},{178,6,7},{177,6,6}};

    do
    {
        c=fgetc(fp);
        while(c!=10&&c!=-1)
        {
            setColor(colorCharCode[c-49][1],colorCharCode[c-49][2]);
            printf("%c%c",colorCharCode[c-49][0],colorCharCode[c-49][0]);
            c=fgetc(fp);
        }
        setColor(0,0);
        printf("%c\n",217);
    }
    while(c!=-1);

    fflush(fp);
    fclose(fp);
    setColor(15,0);
}

void setColor(int fg,int bg)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,fg+(bg*16));
}

#endif
