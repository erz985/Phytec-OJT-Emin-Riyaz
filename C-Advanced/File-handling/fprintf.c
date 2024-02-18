#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *p=fopen("fprintf.txt","r+");
if(p==NULL)
{
printf("error\n");
exit(1);
}
int a,b;
fscanf(p,"%d %d",&a,&b);
printf("%d %d\n",a,b);
int c=8;
float d=8.9;
fprintf(p," %d  %f ",c,d);
fclose(p);
return 0;
}
