#include<stdio.h>
int main()
{
	int a=10,pos=2;
	
	printf("%d\n",a = a | 1);		//Logic to set LSB. Ans 11
	printf("%d\n",a = a | (1 << pos));	//Logic to set nth bit . Ans 15
	printf("%d\n",a = a & ~1);		//Logic to reset LSB. Ans 14
	printf("%d\n",a = a & (~ (1 << pos)));  //Logic to reset nth bit. Ans 10
	printf("%d\n",a = a ^ 1);		//Logic to toggle LSB. Ans 11
	printf("%d\n",a = a ^ (1<<pos));	//Logic to toggle nth bit. Ans 15
	return 0;
}	
