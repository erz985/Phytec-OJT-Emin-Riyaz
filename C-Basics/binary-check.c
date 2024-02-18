#include<stdio.h>
void binarycheck(int);
int main()
{
        int num;
        printf("Enter a number to check for binary : \n");
        scanf("%d",&num);
        binarycheck(num);
        return 0;
        
}

void binarycheck(int n)
{
        int temp,rem;
        temp=n;
        while(n!=0)
        {
                rem=n%10;
                if(rem!=0 && rem!=1)
                {
                        printf("%d is a decimcal number\n",temp);
                        break;
                }
                n=n/10;
                
                if(n==0)
                        printf("%d is a binary number\n",temp);
        }  
}
