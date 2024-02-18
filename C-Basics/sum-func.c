#include<stdio.h>
int sum();
int sum()
{
	float a,b,sum=0;
	printf("Enter two values to add : \n");
	scanf("%f %f",&a,&b);
	sum=a+b;
	printf("The sum is = %0.1f\n",sum);
}
int div();
int div()
{
	float a,b,quo=0;
	printf("Enter two values to divide : \n");
	scanf("%f %f",&a,&b);
	quo=a/b;
	printf("The quotiont is = %0.1f\n",quo);
}		
int main()
{
	sum();
	div();
	return 0;
}		
	
