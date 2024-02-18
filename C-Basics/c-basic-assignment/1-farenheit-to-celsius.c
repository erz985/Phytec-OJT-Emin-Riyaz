#include<stdio.h>
int main()
{
        float c,f;
        printf("Enter the temparature in farenheit : \n");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("Temperature in celsius = %0.1f \n",c);
        return 0;
        
}
