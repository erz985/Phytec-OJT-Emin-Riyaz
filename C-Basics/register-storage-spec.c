#include<stdio.h>
// register int x=89 wont work globally
int main()
{
        register int x=10;
        {
        //register int x=20;
        register int x;
        printf("x=%d",x);
        
        }
        printf("\nx=%d",x);
        return 0;
}
