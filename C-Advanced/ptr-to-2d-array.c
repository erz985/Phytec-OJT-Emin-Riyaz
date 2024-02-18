#include<stdio.h>
int main()
{
        int arr[2][3]={{23,14,52},{45,37,81}};
        printf("%u\n",arr);//eg 100
        printf("%u\n",*arr);//100
        printf("%d\n",**arr);//23
        printf("%u\n",arr+1);//112
        printf("%u\n",*(arr+1));//112
        printf("%d\n",**(arr+1));//45
        printf("%u\n",*arr+1);//104
        printf("%d\n",*(*arr+1));//14
        printf("%d\n",*(*arr+2));//52
        printf("%u\n",*(arr+1)+1);//116
        printf("%u\n",*(*(arr+1)+1));//37
        printf("%u\n",*(*(arr+1)+2));//81
        
        //arr[i][j]=*(*(arr+i)+j)
        
        
        return 0;
        
}
