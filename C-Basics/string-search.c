#include<stdio.h>
#include<string.h>
int search_char(char str[],char key);
int main()
{
    char str[10]="welcome";
    char key='e';
    int pos=search_char(str,key);
    if(pos==0)
    {
        printf("character not found!\n");
    }
    else
    {
        printf("character found in %d position\n",pos);
    }
    return 0;
}
int search_char(char str[],char key)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==key)
        {
            return i+1;
        }
        i++;
    }
    return 0;
}