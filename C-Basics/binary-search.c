//works only when the data is in ascending or desending order
#include<stdio.h>
int binarySearch(int[],int,int);
int main()
{
    int size;
    printf("Enter the size : \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the key element to search :\n");
    scanf("%d",&key);
    int pos=binarySearch(arr,size,key);
    if(pos==0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found in position %d\n",pos);
    }
    return 0;
    
}
int binarySearch(int arr[],int size,int key)
{
    int low=0,high=size-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid+1;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return 0;
}
