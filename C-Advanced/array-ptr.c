#include<stdio.h>
int main()
{
        int arr[4]={12,20,30,35};
        printf("%u\n",arr); // eg 100
        printf("%d\n",*(arr+0)); // arr[0] arr[i]= *(arr+0)
        printf("%u\n",arr+1); //  104
        printf("%d\n",*(arr+1)); // arr[1]
        printf("%u\n",arr+2); // 108
        printf("%d\n",*(arr+2)); // arr[2]
        printf("%u\n",++*arr); //13
        printf("%u\n",*arr+1); // 14
        printf("%u\n",*arr); // 13 
        return 0;
        
}
