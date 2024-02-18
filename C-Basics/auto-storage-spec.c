#include<stdio.h>
// auto int x=89 wont work globally
int main()
{
        auto int x=10;
        {
        auto int x=20;
        //auto int x;
        printf("x=%d",x);
        
        }
        printf("\nx=%d",x);
        return 0;
}
