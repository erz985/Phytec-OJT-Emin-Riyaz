#include<stdio.h>
int main()
{
       int row,space,i,k=0;
        printf("enter the rows\n");
        scanf("%d",&row);
        for(i=1;i<=row;i++)
        {
                for(space=1;space <= row-i;space++)
                {
                        printf(" ");
                }
                k=0;
                while(k!=2*i-1)
                {
                        printf("*");
                        ++k;
                }
                printf("\n");
        }
        return 0;
        
}

/*  To print *

int row,space,i,k=0;
        printf("enter the rows\n");
        scanf("%d",&row);//3
        for(i=1;i<=row;i++)//3<=3
        {
                for(space=1;space <= row-i;space++)1<=0
                {
                        printf(" ");
                }
                k=0;
                while(k!=2*i-1)
                {
                        printf("*");
                        ++k;
                }
                printf("\n");
        }
        return 0;
        
        To print ABC (editing required)
int main()
{
        int row,space,i,k=0,c=97;
        printf("enter the rows\n");
        scanf("%d",&row);//3
        for(i=1;i<=row;i++)//3<=3
        {
                for(space=1;space <= row-i;space++)1<=0
                {
                        printf(" ");
                }
                k=0;
                while(k!=2*i-1)
                {
                        printf("%c ",c++);
                        ++k;
                }
                printf("\n");
        }
        return 0;
}

*/
