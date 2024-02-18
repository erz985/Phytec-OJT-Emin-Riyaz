#include<stdio.h>
int main()
{
        int arr[2][3]={{23,14,52},{45,37,81}};
        int (*ptr)[3]=arr; //This pointer is pointing to 12 bytes (4*3bytes)
        printf("%u\n",ptr); //eg 100
        printf("%u\n",*ptr); // 100
        printf("%d\n",**ptr); // 23
        printf("%u\n",*ptr+1); //104
        printf("%d\n",*(*ptr+1)); //14
        printf("%u\n",*ptr+2); //108
        printf("%d\n",*(*ptr+2)); //52
        ptr++;
        printf("%u\n",ptr); // 112
        printf("%u\n",*ptr); // 112
        printf("%d\n",**ptr); //  45
        printf("%u\n",*ptr+1); // 116
        printf("%d\n",*(*ptr+1)); //37
        printf("%u\n",*ptr+2); //120
        printf("%d\n",*(*ptr+2)); //81
        
        return 0;       
}
