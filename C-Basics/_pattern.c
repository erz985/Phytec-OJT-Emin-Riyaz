#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of lines to print Floyd pattern :\n");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		for (j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");		
	}
	return 0;
}			
			
	
