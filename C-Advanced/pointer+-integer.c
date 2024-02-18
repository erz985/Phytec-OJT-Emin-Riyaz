#include<stdio.h>
int main()
{
        int a=20;
        int *ptr=&a; //eg 100
        printf("%u\n",ptr); //100
        printf("%u\n",ptr+1); //ptr+1*sizeof(int) = 104
        printf("%u\n",ptr+2); //108
        printf("%u\n",ptr-1); //104
        printf("%u\n",++ptr); //104
        printf("%u\n",ptr++); //104
        printf("%u\n",--ptr); //104
        printf("%u\n",ptr--); //104
        printf("%u\n",ptr); //100
        return 0;
        //pointer arthemetics can only be performed on arrays.
}

