#include<stdio.h>
#define MAX(a,b) if(a>b) \
		printf("%d is maximum\n",a); \
		else \
		printf("%d is maximum\n",b); 

int main()
{
	MAX(3,5);
	
	//undef MAX
	MAX(4,6)
	return 0;
}	
	
