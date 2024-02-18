#include<stdio.h>
int main()
{
	int n=0,rem=0,e=0;
	printf("Enter a number to print even numbers in it :\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		if (rem%2==0)
			e=e*10+rem;
		n=n/10;
	}	
	printf("The even numbers in the given number are : %d\n",e);
	return 0;
}		
