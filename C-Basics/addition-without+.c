#include<stdio.h>
int main()
{
        int x,y;
        printf("Enter two numbers to add : ");
        scanf("%d %d",&x,&y);
        
        while(y!=0)
        {
                x++;
                y--;
        }
        printf("Answer = %d\n",x);
        return 0;
}
