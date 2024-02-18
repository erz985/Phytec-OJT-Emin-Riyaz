#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
        FILE *sp=fopen(argv[1],"r");
        FILE *dp=fopen(argv[2],"w");
        if(sp==NULL||dp==NULL)
        {
                printf("error\n");
                exit(1);
        }
        char ch;
        while((ch=fgetc(sp))!=EOF)
        {
                fputc(ch,dp);
        }
        fclose(sp);
        fclose(dp);
return 0;
}
