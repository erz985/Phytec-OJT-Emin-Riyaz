#include<stdio.h>
int main()
{
        int r[5],a[5]={1,2,3,4,5},i;
        printf("Array before reversing: \n");
        for(i=0;i<=4;i++)
        printf("%d\t",a[i]);
        printf("\nArray after reversing: \n");
        for(i=4;i>=0;i--)
        {
                r[i]=a[i];
                printf("%d\t",r[i]);
        }
        return 0;
               
}
