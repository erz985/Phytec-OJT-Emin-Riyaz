#include<stdio.h>
int main ()
{
        int i,n,j;
        printf("Enter a value n to check prime number till n : ");
        scanf("%d",&n);
        for(i=2;i<=n;i++)
        {
                for(j=2;j<=i;j++)
                {
                        if(i%j==0)
                        break;
                }
                if(i==j)
                printf("%d\n",i);
        }
        printf("\n");
        
        return 0;
}
