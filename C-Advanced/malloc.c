#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr=(int *)malloc(4*sizeof(int));
	if(ptr==NULL) //check for this condition everytime
	{
		printf("error\n");
		exit(1);
	}
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<4;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	free(ptr);
	return 0;
}
