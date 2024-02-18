#include<stdio.h>
#define BITS sizeof(int)*8
int main()
{
        int n,order,i;
        printf("Enter a number to check the lowest bit : \n");
        scanf("%d",&n);
        
        order=BITS-1;
        
        for(i=0;i<BITS;i++)
        {
                if((n>>i)&1)
                {
                        order=i;
                        break;
                }
        }
        printf("Lowest order set bit in %d is %d\n",n,order);
        return 0;
        
}
