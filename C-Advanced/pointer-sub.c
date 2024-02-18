#include<stdio.h>
int main()
{
        int a=20,b=10;
        int *ptr1=&a,*ptr2=&b;
        ptr2=ptr1-ptr2;
        printf("%u\n",ptr1);
        printf("%u\n",ptr2);
        return 0;
}        
