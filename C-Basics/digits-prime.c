#include <stdio.h>
int main() 
{
        int n,i,dig,prime;
        printf("Enter the number to check if the digits are prime : \n");
        scanf("%d",&n);
        while(n>0)
        {
                dig=n%10;
                if(dig==1 ||dig==3 || dig==5 || dig == 7)
                {
                        prime=dig;
                        printf("\nIn the given number, %d is a prime number\n",prime);
                }
                n/=10;
        }
        return 0;
}
