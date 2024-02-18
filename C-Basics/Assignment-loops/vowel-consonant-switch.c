#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character : \n");
	scanf("%c",&c);
	switch(c)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			printf("Vowel\n");
			break;
		default:
			printf("Consonant\n");
	}			
	return 0;
}	
