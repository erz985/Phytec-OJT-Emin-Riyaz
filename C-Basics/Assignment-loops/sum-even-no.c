//Find the sum of all even numbers btw 1-n
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter number n to find sum of even numbers between 1-n :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			sum+=i;
	}			
	printf("The sum of even numbers between 1 - %d = %d\n",n,sum);
	return 0;
}	
