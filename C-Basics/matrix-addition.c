#include<stdio.h>
int main()
{
    int i,j,r,c;

    printf("Enter the rows and columns size\n");
    scanf("%d %d",&r,&c);

    int mat1[r][c],mat2[r][c],add[r][c];
    printf("Enter the elements for matrix1\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter the elements for matrix2\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("\nMatrix1 is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix2 is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }


    printf("\ncalculating....\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          add[i][j] = mat1[i][j] + mat2[i][j];
         
        }
    }

    printf("\nAddition is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }


    return 0;
}
