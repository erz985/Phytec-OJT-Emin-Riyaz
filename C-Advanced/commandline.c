#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i;
	for(i=1;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}
	//int sum=atoi(argv[1])+atoi(argv[2]);
	//printf("%d\n",sum);
	return 0;
}
