#include<stdio.h>
int main()
{
	int n=0,i=0,sum=0;
	printf("Enter a number n to find the sum: \n");
	scanf("%d",&n);
	while(i <= n)
	{
		sum+=i;
		i++;
	}
	printf("Sum = %d\n",sum);
	return 0;
}	
