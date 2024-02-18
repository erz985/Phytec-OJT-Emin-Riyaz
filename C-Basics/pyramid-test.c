
#include<stdio.h>
int main()
{
        int i,j,k,n;
        printf("Enter the nummber of rows : ");
        scanf("%d",&n);
        
        for(i=0;i<=n;i++)
        {
                for(j=0;j<=n-i;j++)
                {
                        printf(" ");
                }
                for(k=0;k<=i;k++)
                {
                        printf("* ");
                }
                printf("\n");
        }
        return 0;
}
/*#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the number of rows :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}		
*/

/*
int main()
{
        int n,i,j,k,c=65;
        
        printf("Enter the number of rows : \n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
               
                for(j=1;j<=n-i;j++)
                {
                        printf(" ");
                        
                }
                for(k=1;k<=i;k++)
                {
                        printf("%c ",c++);
                }
                printf("\n");
        }
        return 0;
}
*/

/*
#include<stdio.h>
int main()
{
        int row,space,i,k=0,c=97;
        printf("enter the rows\n");
        scanf("%d",&row);
        for(i=1;i<=row;i++)
        {
                for(space=1;space<=row-i;space++)
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
