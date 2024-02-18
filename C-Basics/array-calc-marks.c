#include<stdio.h>
int main()
{
        int n,i;
        printf("Enter number of subjects to calculate total and average : ");
        scanf("%d",&n);
        float marks[n], total,avg;
        printf("Enter the marks of each subject : \n");
        
        for(i=0;i<n;i++)
        {
                scanf("%f",&marks[i]);
        }
        
        for(i=0;i<n;i++)
        {
                total+=marks[i];
        }
        printf("The total marks of the student = %0.1f \n",total);
        avg=total/n;
        printf("The average marks of the student = %0.1f ",avg);
        return 0;
}
