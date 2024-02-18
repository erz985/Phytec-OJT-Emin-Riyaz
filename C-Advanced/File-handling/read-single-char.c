#include<stdio.h>
#include<stdlib.h>
int main()
{
        FILE *fp=fopen("read-file.txt","r");
        if(fp==NULL)
        {
                printf("Error\n");
                exit(1);
        }
        char ch=fgetc(fp);
        printf("%c\n",ch);
        fclose(fp);
        return 0;
}
