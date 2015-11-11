//#ifndef  _GETOP_H_
//#define _GETOP_H_

#include<ctype.h>
#include<stdio.h>

#define NUMBER '0'

int  getch_my(void);
void ungetch_my(int);

int getop(char s[])
{
    int c,i;
    //c = getch_my();
    while((s[0] = c = getch_my()) == ' ' || c == 't');
    s[1] = '\0';

    if(!isdigit(c) && c != '.')
        return c;       /*not a number*/

    i = 0;
    if(isdigit(c))
        while(isdigit(s[++i] = c = getch_my()))
            ;
    if(c == '.')
        while(isdigit(s[++i] = c = getch_my()))
            ;
    s[i] = '\0';
    if(c != EOF)
        ungetch_my(c);
    return NUMBER;
}

//#endif
