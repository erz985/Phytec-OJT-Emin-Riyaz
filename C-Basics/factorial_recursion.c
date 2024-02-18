/*
#include<stdio.h>

fact(int);

int main()
{
        int n;
        printf("Enter the range : ");
        scanf("%d",&n);
        printf("The factorial of the given number is %d\n",fact(n));
        return 0;
}

fact(int n)
{
        if(n==1)
                return 1;
         
        else
                return n*fact(n-1);
} */


#include<stdio.h>

fact(int);

int main()
{
        int n,i;
        printf("Enter the range : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                printf("%d\t",fact(i));
        }
        return 0;
}

fact(int n)
{
        if(n==1)
                return 1;
         
        else
                return n*fact(n-1);
}
