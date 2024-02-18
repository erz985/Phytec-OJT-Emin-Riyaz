//Check if given number is single, double or triple digit.
#include<stdio.h>
int main()
{
	int n=0;
	printf("Enter the number : \n");
	scanf("%d",&n);
	switch(n)
	{
		case 0 ... 9:
			printf("Single Digit\n");
			break;
		case 10 ... 99:
			printf("Double Digit\n");
			break;
		case 100 ... 999:
			printf("Triple Digit\n");
			break;	
		default:
			printf("Invalid input\n");
	}			
	return 0;
}	
