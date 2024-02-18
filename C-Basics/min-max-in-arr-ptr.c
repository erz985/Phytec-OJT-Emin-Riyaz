#include<stdio.h>
int  main()
{
        int  min,max;
        int a[10]={129,54,89,56,47,12,5,23,9,45};
                
        minmax(a, &min, &max);
        printf("The min value is : %d \n The max value is : %d\n",min,max);
        return 0;
}

void minmax(int ar[], int *min, int *max)
{
        int i;
        *min=*max=ar[0];
        
        for(i=0;i<10;i++)
        {
                if(ar[i]>*max)
                        *max=ar[i];
                if(ar[i]<*min)
                        *min=ar[i];        
        }
}

