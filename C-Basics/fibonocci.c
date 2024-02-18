#include<stdio.h>
int main() 
{
        int n,i,fn=1,sn=1,ln; //fn=1st no, sn=2nd no,ln=last no
        printf("Enter the range to print fibonocci series : \n");
	scanf("%d",&n);
	printf("%d %d ",fn,sn);
	for(i=3;i<=n;i++)
	{
		ln=fn+sn;
		printf("%d ",ln);
		fn=sn;
		sn=ln;
	}   
	return 0;
}
