#include<stdio.h>
#define SUM(x,y) x+y
#define MUL(x,y) x*y
int  main()
{
	int a=6,b=4;
	printf("%d\n",SUM(a,b));
	printf("%d\n",MUL(a,b));
	printf("%d\n",MUL(a-2,b+4)); //6-2*4+4
	return 0;
}	
