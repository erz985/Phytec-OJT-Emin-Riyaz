#include<stdio.h>
int main()
{
	printf("%s\n",__DATE__); //to print current date
	printf("%s\n",__TIME__);//to print current time
	printf("%s\n",__FILE__); //to print current file name
	printf("%d\n",__LINE__); //to print current line
	printf("%d\n",__STDC__); //to check if the compiler is in accordance with ASIC
	return 0;
}	
	
