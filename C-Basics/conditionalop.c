#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	printf("Enter 3 numbers to compare: \n");
	scanf("%d %d %d",&a,&b,&c);
	(a>b)&&(a>c)?printf("a is greater\n"):(b>c)?printf("b is greater\n"):printf("c is greater\n");
	return 0;
}
