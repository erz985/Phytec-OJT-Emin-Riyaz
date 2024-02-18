#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	printf("Enter three numbers to be checked : \n");
	scanf("%d %d %d",&a &b,&c);
	if(a>b && a>c)
		printf("A is Greater\n");
	else if(b>c)
		printf("B is greater\n");
	else
		printf("C is greater\n");
	return 0;
}		
