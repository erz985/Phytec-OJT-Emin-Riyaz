#include<stdio.h>
int main()
{
	float a=0,b=0;
	int op;
	printf("Enter 2 operands to calculate : \n");
	scanf("%f %f",&a,&b);
	printf("Enter the operation number to perform: \n 1.Multiply\n 2.Add\n 3.Subtract\n 4.Divide\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("A*B = %f",a*b);
			break;
		case 2:
			printf("A+B = %f",a+b);
			break;
		case 3:
			printf("A-B = %f",a-b);
			break;	
		case 4:
			printf("A/B = %f",a/b);
			break;
	}
	return 0;
}			
