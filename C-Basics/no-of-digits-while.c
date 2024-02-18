#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter a number to check the number of digits : \n");
	scanf("%d",&n);
	while(n!=0)
	{
		count++;
		n/=10;
	}
	printf("Number of digits in the given number is : %d\n",count);
	return 0;
}		
