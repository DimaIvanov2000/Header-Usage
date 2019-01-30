#ifndef DIMAIO
#define DIMAIO

void setColor(int fg,int bg)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,fg+(bg*16));
}

void cprintf(int fg,int bg,char*str)
{
    setColor(fg,bg);
    printf("%s",str);
}

void cprinti(int fg,int bg,int num)
{
    setColor(fg,bg);
    printf("%i",num);
}

void cprintc(int fg,int bg,char c)
{
    setColor(fg,bg);
    printf("%c",c);
}

void getInt(FILE*fp,int*dest)
{
    char c;

    *dest=0;
    c=getc(fp);
    while(c!=92&&c!=10&&c!=-1)
    {
        *dest=*dest*10+c-48;
        c=getc(fp);
    }
}

void getStr(FILE*fp,char*dest,int limit)
{
    char c;
    int i;

    for(i=0;i<=limit;i++)
    {
        dest[i]=0;
    }
    i=0;
    c=getc(fp);
    while(c!=92&&c!=10&&c!=-1)
    {
        if(i<limit)
        {
            dest[i]=c;
        }
        i++;
        c=getc(fp);
    }
}

#endif
