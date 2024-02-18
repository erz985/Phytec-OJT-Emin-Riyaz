#include<stdio.h>
int *fun();
int *fun()
{
        int a=10;
        int *fptr=&a;
        return fptr;
}
int main()
{
        int *ptr=fun();
        printf("%d\n",*ptr);
        return 0;
}
