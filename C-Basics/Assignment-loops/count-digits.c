#include<stdio.h>
int main()
{
	int n=0,rem=0,count=0,i;
	printf("Enter number to count the number of it's digits :\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}	
	printf("The number of the digits = %d\n",count);
	return 0;
}		
/* Using for and while

for(i=0;i<=n; i++)
	{
		n=n/10;
		if (n!=0) 
		count++;
	}
while(n!=0)
	{
		n=n/10;
		count++;
	}	

*/
