#include<stdio.h>

#define PATH "~/KR/charpter1/file"

typedef struct sym
{
    int  count;
    char *key;
}sym;


sym *symbal(sym *sym_file);

sym *symbal(sym *sym_file)
{
   // char *path = PATH;
    char *path = "./file";
    char ch;
    int i;
    FILE *fp;

    if((fp = fopen(path,"r")) == NULL)
    {
        perror("fopen");
    }
    else
    {
        ch = fgetc(fp);
        while(ch != EOF)
        {
            if(ch == ' ')
                sym_file[0].count++;
            if(ch == '\t')
                sym_file[1].count++;
            if(ch == '\n')
                sym_file[2].count++;
            ch = fgetc(fp);
        }
    }

    fclose(fp);
    return sym_file;
}

int main(int argc, char *argv[])
{
    int i;
    sym sym_file[2];
    sym_file[0].key = "space";
    sym_file[1].key = "tab";
    sym_file[2].key = "enter";
    for(i=0;i<3;i++)
    {
        sym_file[i].count = 0;
    }
    //sym_file = symbal(sym_file);
    symbal(sym_file);
    for(i=0;i<3;i++)
    {
        printf("%s:%d\n",sym_file[i].key,sym_file[i].count);
    }
    return 0;
}
