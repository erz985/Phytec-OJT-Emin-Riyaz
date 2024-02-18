#include<stdio.h>
#include<stdlib.h>
int main()
{
        FILE *fp=fopen("write-single-char.txt","a");
        if(fp==NULL)
        {
                printf("Error\n");
                exit(1);
        }
        char ch;
        while((ch=getchar())!='\n')
        {
                fputc(ch,fp);
        }        
        fclose(fp);
        return 0;
}
