//#ifndef _OPERATE_H_
//#define _OPERATE_H_

#include<stdio.h>

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if(sp < MAXVAL)
        val[sp++] = f;
    else 
        printf("error:stack full\n");
}

double pop()
{
    if(sp > 0)
        return val[--sp];
    else{
        printf("error:stack empty\n");
        return 0.0;
    }
}

//#endif
