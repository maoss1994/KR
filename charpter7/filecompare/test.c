#include<stdio.h>
#include<stdlib.h>

main(int argc, char *argv[])
{
    FILE *fp;
    char line[100];
    if((fp = fopen(*++argv,"r")) == NULL)
    {
        perror("open error\n");
        exit(1);
    }
    else
    {
         while(fgets(line,100,fp) != NULL)
         {
                printf("%s",line);
         }
    }
    fclose(fp);
}
