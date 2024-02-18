#include<stdio.h>
int main()
{
	long long int n=0;
	int c=0;
	printf("Enter the number to count digits: \n");
	scanf("%lld",&n);
	while(n != 0)
	{
		n/=10;
		c++;
	}
	printf("Count = %d\n",c);
	return 0;
}	
