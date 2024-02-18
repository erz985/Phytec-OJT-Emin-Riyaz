#include<stdio.h>
int main()
{
        int a,b,temp;
        printf("Enter the values of A and B to swap : \n");
        scanf("%d %d",&a,&b);
        a=a^b;
        b=b^a;
        a=a^b;
        printf("The swapped number are A = %d , B = %d\n",a,b);
        return 0;
        
}
