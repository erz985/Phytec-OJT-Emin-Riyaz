#include<stdio.h>
void add(int a,int b)
{
	printf("%d\n",a+b);
}
void sub(int a,int b)
{
	printf("%d\n",a-b);
}
void mul(int a,int b)
{
	printf("%d\n",a*b);
}
int main()
{
	int a=20,b=10;
	void (*fp[3])(int ,int)={add,sub,mul};
	int ch;
	printf("enter a choice\nadd:0\nsub:1\nmul:2\n");
	scanf("%d",&ch);
	(fp[ch])(a,b);
	return 0;
}
