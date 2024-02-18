#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter a number till which multiplication table is required :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d x %d = %d\n",i,j,i*j);
		}
		printf("***************************************************\n");
	}
	return 0;
}				
