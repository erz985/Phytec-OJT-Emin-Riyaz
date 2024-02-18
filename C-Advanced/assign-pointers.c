#include<stdio.h>
int main()
{
        int a=50;
        int *ptr1=&a;
        int *ptr2;
        ptr2=ptr1;
        printf("%d %d\n",*ptr1,*ptr2);
        return 0;
}
