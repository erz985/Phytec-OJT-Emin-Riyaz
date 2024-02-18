#include<stdio.h>
int main()
{
	int a=0,i=0;
	printf("Enter rangr to print numbers from n to 1 :\n");
	scanf("%d",&a);
	for(i=a;i>0;i--)
		printf("%d\t",i);
	return 0;
}		
