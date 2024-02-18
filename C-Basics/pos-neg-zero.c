#include<stdio.h>
int main()
{
	int a=0;
	printf("Enter a nunber to check: \n");
	scanf("%d",&a);
	if (a > 0)
		printf("Postive number\n");
	else if(a<0)
		printf("Negative number\n");
	else if(a==0)
		printf("Zero\n");
	return 0;
}			
