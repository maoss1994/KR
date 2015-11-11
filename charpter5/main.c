#include<stdio.h>

#define MAXLINE 5

char *lineptr[MAXLINE];

int  getlines(char *,int);
int  readline(char *[], int);
void writeline(char *[], int);
void quicksort(char *[], int, int);
void swap(char *[], int, int);


main()
{
    int nline;

    if((nline = readline(lineptr,MAXLINE)) >= 0){
        quicksort(lineptr,0,nline-1);
        writeline(lineptr,nline);
        return 0;
    }
    else{
        printf("error:input too big\n");
        return 1;
    }
}
