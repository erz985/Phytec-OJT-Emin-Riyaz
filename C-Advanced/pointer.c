#include<stdio.h>
int main()
{
        int a=10;
        printf("%p\n",&a);
        int *ptr=&a;
        printf("%p\n",ptr);
        printf("%d\n",*ptr);
        *ptr=20;
        printf("%d\n",a);
        return 0;
}
