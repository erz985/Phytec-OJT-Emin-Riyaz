#include<stdio.h>
int main()
{
        int arr[4]={12,20,30,35};
        int *ptr=arr;
        printf("%u\n",ptr); // eg 100
        printf("%d\n",*(ptr+0)); // arr[0]=12
        printf("%u\n",ptr+1); //  104
        printf("%d\n",*(ptr+1)); // arr[1]=20
        ptr++;
        ptr++;
        printf("%u\n",ptr); // 108
        printf("%d\n",*ptr); // 30
        printf("%d\n",*ptr++); //30
        printf("%d\n",++*ptr); // 36
        return 0;
        
}
