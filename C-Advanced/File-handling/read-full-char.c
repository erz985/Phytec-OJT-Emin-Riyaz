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
        char ch;
        while((ch=fgetc(fp))!=EOF)
        {
                putchar(ch);
        }
        fclose(fp);
        return 0;
}
