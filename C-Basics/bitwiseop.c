#include<stdio.h>
int main()
{
	int num1=0,num2=0;
	printf("Enter the 2 numbers\n");
	scanf("%d %d",&num1,&num2);
	printf("The num1 & num2 is %x\n",num1 & num2); /* %x is used to convert values to hexadecimal otherwise we will have to take the 2's complement */
	printf("The num1 | num2 is %x\n",num1 | num2);
	printf("The num1 ^ num2 is %x\n",num1 ^ num2);
	printf("The ~num1 is %x and ~num2 is %x\n",~num1,~num2);
	printf("The compliment of num1 is %d num2 is %d\n", ~num1,~num2);
	return 0;
}
