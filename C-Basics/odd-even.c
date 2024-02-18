#include<stdio.h>
int main()
{
	int a=0;
	printf("Enter a number to check if it's odd or even : \n");
	scanf("%d",&a);
	if(a%2 == 0)
		printf("Even\n");
	else
		printf("Odd\n");
	return 0;
}		
