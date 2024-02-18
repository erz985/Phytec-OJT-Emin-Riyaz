#include<stdio.h>
int sum(int n);
int main()
{
	int n=5;
	int s=sum(5);
	printf("sum of first %d numbers is %d\n",n,s);
	return 0;
}
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n+sum(n-1);
}
