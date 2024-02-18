#include<stdio.h>
int main()
{
        float ft,in,m,cm;
        printf("Enter the height in feet and inches : \n");
        scanf("%f %f",&ft,&in);
        m=ft/3.2808;
        cm=in*2.54;
        printf("Height is %0.1f meters and %0.2f centimeters\n",m,cm);
        return 0;
}
