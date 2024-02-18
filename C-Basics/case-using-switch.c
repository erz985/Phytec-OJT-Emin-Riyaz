#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character : \n");
	scanf("%c",&c);
	switch(c)
	{
		case 'A'... 'Z':
			printf("Upper case\n");
			break;
		case 'a' ... 'z':
			printf("Lower case\n");
			break;
		default:
			printf("Invalid input\n");
	}			
	return 0;
}	
