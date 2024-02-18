#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,n1;
	printf("enter number of elements\n");
	scanf("%d",&n);
	int *ptr=(int *)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("error\n");
		exit(1);
	}
	printf("enter elements\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("enter new number of elements\n");
	scanf("%d",&n1);
	ptr=(int *)realloc(ptr,n1*sizeof(int));
	if(ptr==NULL)
	{
		printf("error\n");
		exit(1);
	}
	printf("enter remaining elements\n");
	for(i=n;i<n1;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("elements are\n");
	for(i=0;i<n1;i++)
	{
		printf("%d\n",ptr[i]);
	}
	free(ptr);
	return 0;
}
