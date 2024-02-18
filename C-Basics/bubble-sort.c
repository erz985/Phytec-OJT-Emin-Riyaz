#include<stdio.h>
void print(int[],int size);
void bubble(int[],int size);
int main()
{
    int arr[]={1,4,2,6,3,0};
    printf("\nElements before sorting : \n");
    print(arr,6);
    bubble(arr,6);
    printf("\nElements after sorting : \n");
    print(arr,6);
    return 0;
}
void bubble(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void print(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}
