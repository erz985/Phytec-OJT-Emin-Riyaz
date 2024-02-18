#include<stdio.h>
#include<stdlib.h>
int main()
{
        FILE *fp=fopen("write+mode.txt","w+");
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
        rewind(fp); //to rewind the cursor back to the beginning
        while((ch=fgetc(fp))!=EOF)
        {
                putchar(ch);
        }
        fclose(fp);
        return 0;
}
