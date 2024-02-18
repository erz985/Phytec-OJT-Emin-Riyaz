#include<stdio.h>
void fibo_func(int n);
int main() 
{
        int n; //fn=1st no, sn=2nd no,ln=last no
        printf("Enter the range to print fibonocci series : \n");
	scanf("%d",&n);
	fibo_func(n);
	return 0;
}

void fibo_func(int n)
{
        int i,fn=1,sn=1,ln;
	printf("%d %d ",fn,sn);
	for(i=3;i<=n;i++)
	{
		ln=fn+sn;
		printf("%d ",ln);
		fn=sn;
		sn=ln;
	}
	printf("\n");    
}
