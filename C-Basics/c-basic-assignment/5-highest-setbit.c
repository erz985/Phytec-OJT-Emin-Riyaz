,#include<stdio.h>
#define BITS sizeof(int) * 8
int main()
{
        int n,order=-1,i;
        printf("Enter the number to check highest order set bit : \n");
        scanf("%d",&n);
        
        for(i=0;i<BITS;i++)
        {
                if((n>>i)&1)
                        order=i;
        } 
        if(order != -1)
                printf("Highest order set bit in %d is %d\n", n, order);
        else 
                printf("0 has no set bits.\n");

        return 0;
}        

