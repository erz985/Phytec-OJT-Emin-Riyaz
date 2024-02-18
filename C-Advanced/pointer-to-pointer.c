#include<stdio.h>
int main()
{
        int a=10;
        int *ptr=&a;
        int **pptr=&ptr;
        printf("%d\n",a); //10
        printf("%u\n",&a); //eg 100
        printf("%u\n",ptr); //100
        printf("%u\n",*ptr); //10
        printf("%u\n",&ptr); // eg 1000
        printf("%u\n",pptr); //1000
        printf("%u\n",*pptr); //100
        printf("%d\n",**pptr); //10
        printf("%u\n",&pptr); // eg 2000
        return 0;
}
        
