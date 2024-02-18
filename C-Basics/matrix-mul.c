#include<stdio.h>
#define MAX 50
int main()
{
        int i,j,k,sum=0;
        int a[MAX][MAX],b[MAX][MAX],p[MAX][MAX];
        int arow,acol,brow,bcol;
        
        printf("Enter the number of rows and columns of Matrix A : \n");
        scanf("%d %d",&arow,&acol);
        
        printf("Enter the elemets of Matrix A : \n");
        for(i=0;i<arow;i++)
        {
                for(j=0;j<acol;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }

        printf("\n");
        printf("Elememts of Matrix A are : \n");
        for(i=0;i<arow;i++)
        {
                for(j=0;j<acol;j++)
                {
                        printf("%d ",a[i][j]);
                }
                printf("\n");
        }
        printf("\n");
        
        printf("Enter the number of rows and columns of Matrix B : \n");
        scanf("%d %d",&brow,&bcol);
        printf("\n");
        
        printf("Enter the elemets of Matrix B : \n");
        for(i=0;i<brow;i++)
        {
                for(j=0;j<bcol;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
        
        printf("\n");
        printf("Elememts of Matrix B are : \n");
        for(i=0;i<brow;i++)
        {
                for(j=0;j<bcol;j++)
                {
                        printf("%d  ",b[i][j]);
                }
                printf("\n");
        }
        
        printf("Multiplying...\n");
        
        if(bcol!=arow)
                printf("Multiplication of A and B not possible!\n");
        else
        {
                for(i=0;i<arow;i++)
                {
                        for(j=0;j<bcol;j++)
                        {
                                for(k=0;k<brow;k++)
                                {
                                        sum=sum + a[i][k] * b[k][j];
                                }
                                p[i][j]=sum;
                                sum=0;
                        }
                }
        }
        
        printf("Resultant Matrix : \n");
        printf("\n");
        for(i=0;i<arow;i++)
        {
                for(j=0;j<bcol;j++)
                {
                        printf("%d  ",p[i][j]);
                }
                printf("\n");
        }
        
        return 0;
}
