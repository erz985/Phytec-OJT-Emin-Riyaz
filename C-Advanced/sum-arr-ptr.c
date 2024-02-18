#include<stdio.h>
int main()
{
        int a[5]={23,5,36,9,78};
        int *p,sum=0;
        
        for(p=&a[0];p<=&a[4];p++)
        {
                sum+=*p;
        }
        printf("Sum of array elements = %d\n",sum);
        return 0;
}
