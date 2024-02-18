#include<stdio.h>
int main()
{
        int arr1[4]={4,5,3,2};
        int arr2[4];
        int i;
        for(i=0;i<4;i++)
        {
                arr2[i]=arr1[i];
                printf("%d\n",arr2[i]);
        }
        return 0;
}
