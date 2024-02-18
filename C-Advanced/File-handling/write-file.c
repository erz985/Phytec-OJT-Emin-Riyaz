#include<stdio.h>
#include<stdlib.h>
int main()
{
        FILE *fp=fopen("write-single-char.txt","w");
        if(fp==NULL)
        {
                printf("Error\n");
                exit(1);
        }
        char ch='a';
        fputc(ch,fp);
        fclose(fp);
        return 0;
}
