#include<stdio.h>
struct student
{
    int rno;
    char name[20];
    float mark;
};
struct student s2={2,"nisha",98.6};
int main()
{
        struct student s[4]={{1,"Emin",98.7},{2,"Mukesh",55.5},{3,"moorthy",56.6},  {4,"nisha",98.6}};
        int i;
        for(i=0;i<4;i++)
        {
                printf("%d %s %f\n",s[i].rno,s[i].name,s[i].mark);
        }            
        return 0;
}        
