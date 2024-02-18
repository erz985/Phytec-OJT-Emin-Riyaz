#include<stdio.h>
extern int a; //decleration
void fun();
int main()
{
        a=7;
        printf("%d\n",a); //7
        fun(); //10
        printf("%d\n",a); //10
        return 0;
}
