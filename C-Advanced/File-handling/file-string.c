#include<stdio.h>
#include<stdlib.h>
int main()
{
        FILE *fp=fopen("string.txt","r");
        if(fp==NULL)
        {
                printf("Error \n");
                exit(1);
        }
        char str[50];
        while(fgets(str,50,fp)!=NULL);
        {
                printf("%s\n",str);
        }
        fclose(fp);
        return 0;
}
