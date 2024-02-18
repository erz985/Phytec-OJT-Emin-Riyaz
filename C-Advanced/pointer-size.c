#include<stdio.h>
int main()
{
        int a=10;
        int *ptr=&a;
        printf("%u\n",ptr);
        printf("%d\n",*ptr);
        char ch='k';
        char *cptr=&ch;
        printf("%u\n",cptr);
        printf("%c\n",*cptr);
        printf("Size of int pointer : %lu\n",sizeof(int *));
        printf("Size of char pointer : %lu\n",sizeof(char *));
        return 0;
}
