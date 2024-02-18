#include<stdio.h>
int fact();
int main()
{
	fact();
	return 0;
}		
int fact()
{
	int a=0,i,mul=1;
	printf("Enter number to find factorial :\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		mul=mul*i;
	}	
	printf("The factorial of %d = %d\n",a,mul);
}	
