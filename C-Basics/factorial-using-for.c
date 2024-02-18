#include<stdio.h>
int main()
{
	int n,i,sum=1;
	printf("Enter number to find factorial :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
		printf("%d  ",sum);
        }
        printf("\n");
	return 0;
}		
