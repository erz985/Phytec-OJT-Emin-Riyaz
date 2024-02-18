#include<stdio.h>
int main()
{
	int a=0,b=0;
	printf("Enter two numbers to be swapped :\n " );
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The swapped numbers are a= %d \t b= %d",a,b);
	return 0;
}	
