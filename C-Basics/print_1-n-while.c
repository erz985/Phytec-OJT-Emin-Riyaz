#include<stdio.h>
int main()
{
	long int n=1;
	int c=1;
	printf("Enter the number : \n");
	scanf("%d",&n);
	while(n/10==0)
	{
		printf("%ld\n",n);
		c++;
	}
	return 0;
}	
