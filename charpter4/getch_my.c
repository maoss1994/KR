#include<stdio.h>

#define BUFSIZE 100

int  bufp = 0;
char buf[BUFSIZE];

int getch_my(void)
{
    return (bufp > 0 ? buf[--bufp] : getchar());
}


void ungetch_my(int ch)
{
    if(bufp >= BUFSIZE)
        printf("error:too many characters\n");
    else{
        buf[bufp++] = ch;
    }
}
