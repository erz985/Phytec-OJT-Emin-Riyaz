#include<stdio.h>
int main()
{
	float a=0,b=0,c=0;
	printf("Enter the length of 3 sides of the triangle in cm : \n");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b && a==c && b==c)
		printf("Equilateral\n");
	else if(a==b || a==c || b==c)
		printf("Isoceles\n");
	else
		printf("Scalane\n");		
	return 0;
}	
