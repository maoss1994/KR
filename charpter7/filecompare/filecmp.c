#include<stdio.h>
#include<stdlib.h>

#define MAXLINE 100

void filecmp(FILE *fp1,FILE *fp2);

main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char *prog = argv[0];
    if(argc < 3)
    {
        fprintf(stderr, "No Enough Files!\n");
        exit(1);
    }

    if((fp1 = fopen(*++argv,"r")) == NULL)
    {
        fprintf(stderr," %s: can't open %s \n", prog, *argv);
        exit(1);
    }

    if((fp2 = fopen(*++argv,"r")) == NULL)
    {
        fprintf(stderr," %s: can't open %s \n", prog, *argv);
        exit(1);
    }

    else
    {
        filecmp(fp1,fp2);
        fclose(fp1);
        fclose(fp2);
    }
}

void filecmp(FILE *fp1, FILE *fp2)
{
    char line1[MAXLINE],line2[MAXLINE];
    int flag,count;
    flag  = 0;
    count = 1;
    while((fgets(line1,MAXLINE,fp1) != NULL) && \
         (fgets(line2,MAXLINE,fp2) != NULL))
    {
        if(strcmp(line1,line2) == 0)
        {
            flag = 1;
            break;            
        }
        count++;
    }

    if(flag)
    {
        printf("the same line is %d\n",count);
        printf("%s",line1);
    }
    else
    {
        printf("Don't have same line\n");
    }
}
