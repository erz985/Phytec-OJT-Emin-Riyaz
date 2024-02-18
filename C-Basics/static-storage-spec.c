#include<stdio.h>
void display();
void main()
{
        display();//20
        display();//30
        display();//40    
}
void display()
{
        static int x=10;
        x=x+10;
        printf("\nx=%d",x);
}
