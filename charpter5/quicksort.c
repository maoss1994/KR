#include<stdio.h>
#include<string.h>

void swap(char *v[], int i, int j)
{
    char *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
 }

void quicksort(char *v[], int left, int right)
{ 
    if(left > right)
        return;
    int mid,last;
    int i;
    mid = (left + right) / 2;
    swap(v,left,mid);
    last = left;
    for(i = left + 1;i <= right;i++)
        if(strcmp(v[i],v[left]) < 0)
            swap(v,++last,i);
    swap(v,left,last);
    quicksort(v,left,last-1);
    quicksort(v,last+1,right);
}


