#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXLEN 100

int getlines(char *line, int maxlen)
{
    int i,c;
    i = 0;
    while (--maxlen > 0 && (c = getchar()) != EOF && c != '\n')
    {
        *(line++) = c;
        i++;
    }
    if (c = '\n'){ 
        *(line++) = c;
        i++;
    }
    *(line++) = '\0';
    return i+1;
}

int readline(char *lineptr[],int maxline)
{
    int nline,len;
    char *p,line[MAXLEN];
    while((len = getlines(line,MAXLEN)) > 0)
    {
        if(nline > maxline || (p = malloc(len)) == NULL)
            return -1;
        else{
            line[len - 1] = '\0';
            strcpy(p,line);
            lineptr[nline++] = p;
        }
        free(p);
    }
        return nline;
}

void writeline(char *lineptr[],int nline)
{
    while(nline-- > 0)
        printf("%s\n",*lineptr++);
}

