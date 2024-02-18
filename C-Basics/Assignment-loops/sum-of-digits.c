#include<stdio.h>
int main()
{
	int n=0,rem=0,sum=0;
	printf("Enter number to find the sum of its digits :\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}	
	printf("The sum of the digits = %d\n",sum);
	return 0;
}		
