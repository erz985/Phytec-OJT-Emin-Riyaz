#include<stdio.h>
/*struct DOB
{
	int date;
	int month;
	int year;
};*/
struct student
{
	int rn;
	char name[20];
	struct DOB 
	{
		int date;
		int month;
		int year;
	}dob;	
};
int main()
{
	struct student s1={1,"Mubeena",{12,12,2000}};
	printf("%d %s %d-%d-%d\n",s1.rn,s1.name,s1.dob.date,s1.dob.month,s1.dob.year);
	return 0;
}
