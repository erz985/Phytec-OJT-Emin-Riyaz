#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter key element to search in the array :\n");
    scanf("%d",&key);
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            printf("My key element is present in position %d.\n",i+1);
            return 0;
        }
    }
    printf("The key element is not present.\n");
    return 0;
}
