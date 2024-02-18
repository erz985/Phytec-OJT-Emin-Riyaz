#include<stdio.h>
int main()
{
        int n;
        printf("Enter the number to check if the LSB is set or not : \n");
        scanf("%d",&n);
        if(n&1==1)
        printf("LSB is set\n");
        else
        printf("LSB is not set\n");
        return 0;
}
