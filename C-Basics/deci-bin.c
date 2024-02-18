#include <stdio.h>

void dtob(int n) 
{
    if (n > 0) 
    {
        dtob(n/2);
        printf("%d",n%2);
    }
}

int main() 
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    printf("Binary representation: ");
    dtob(n);
    printf("\n");
    
    return 0;
}
