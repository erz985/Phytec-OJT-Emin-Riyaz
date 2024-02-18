#include<stdio.h>
struct student
{
    int rno;
    char name[20];
    float mark;
}s1={1,"Emin",98.7};
struct student s2={2,"nisha",98.6};
int main()
{
   
    printf("%d %s %f\n",s1.rno,s1.name,s1.mark);
    printf("%d %s %f\n",s2.rno,s2.name,s2.mark);
    struct student s3;
    scanf("%d %s %f",&s3.rno,&s3.name,&s3.mark);
    printf("%d %s %f\n",s3.rno,s3.name,s3.mark);
    
    struct student *ptr=&s1;
    printf("%d %s %f\n",ptr->rno,ptr->name,ptr->mark);
    
    return 0;
}
