#include<stdio.h>
int main()
{
        int a=10;
        void *ptr=&a;
        printf("%u\n",ptr); //address
        printf("%d\n",*(int *)ptr); //type casting =10
        
        char c='E';
        ptr=&c;
        printf("%u\n",ptr); //address
        printf("%c\n",*(char *)ptr); //type casting =E
        
        float b=21.5;
        ptr=&b;
        printf("%u\n",ptr); //address
        printf("%f\n",*(float *)ptr); //type casting =21.5
        
        double d=21.562662;
        ptr=&d;
        printf("%u\n",ptr); //address
        printf("%lf\n",*(double *)ptr); //type casting =10
         
        
        return 0;
}

