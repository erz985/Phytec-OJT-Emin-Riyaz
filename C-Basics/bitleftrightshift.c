#include<stdio.h>
int main()
{
	int num1=0,num2=0;
	printf("Enter the 2 numbers\n");
	scanf("%d %d",&num1,&num2);
	printf("The num1 << num2 is %x\n",num1 << num2);
	printf("The num1 >> num2 is %x\n",num1 >> num2);
	return 0;
}/* if we are shifting, num1 get left shifted to bit by bit num2 number of times
In left shitfting a positive number if we are truncating a 0 or 1, we will append a 0 
In left shitfting a negative number if we are truncating a 0 or 1, we will append a 0 
In right shitfting a positive number if we are truncating a 0 or 1, we will append a 0 
In right shitfting a negative number if we are truncating a 0 or 1, we will append a 1 
*/ 		
