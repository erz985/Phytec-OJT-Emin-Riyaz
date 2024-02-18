/*
#include<stdio.h>
#define BITS sizeof(int) * 8 // Total bits required to represent integer

int main()
{
    int num, msb;

    
    printf("Enter any number: ");
    scanf("%d", &num);

    
    msb = 1 << (BITS - 1);

    
    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);

    return 0;
}
*/
#include<stdio.h>
#define BITS sizeof(int)*8
int main()
{
        int n,msb;
       
        printf("Enter the number to check if the MSB is set or not : \n");
        scanf("%d",&n);
        msb=1<<(BITS-1);
        if(n&msb)
        {
                printf("MSB is set (1)\n");
        }
        else
        {
                printf("MSB is not set (0)\n");
        }
        return 0;
} 
