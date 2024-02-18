#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct ad
{
    char name[50],disease[50];
    int room,phone,age;
}; 
struct ad x[100];

int n,i,j=0,sum=0,num;

void read();
void add();
void view();
void edit();
void del();
void show();
void save();

int main()
{
    read();
    int c,i;
    system("clear");
    printf("Hospital Database Management System\n");
    printf("Program by Emin Riyaz\n");
    printf("\n------------------------------------------\n");
    while(c!=6)
    {

        printf("Enter the number below to perform operations :\n\n1. Add Patient Information\n2. View Patient Information\n3. Edit Patient Information\n4. Delete Patient Information\n5. Save Info to file\n6. Exit the program\n\nSelect Option : ");
        scanf("%d",&c);
        fflush(stdin);
        if(c==1)
        {
            system("clear");
            add();
        }
        else if(c==2)
        {
            system("clear");
            view();
        }
        else if(c==3)
        {
            system("clear");
            edit();
        }
        else if(c==4)
        {
            system("clear");
            del();
        }
        else if(c==5)
        {
            system("clear");
            save();
        }
        
        else if(c==6)
        {
            write();
            printf("\nThank you for using HOSPITAL DBMS\n-BY EMIN RIYAZ\n");
            return 0;
        }
        else
        {
            system("clear");
            printf("\n\nInvalid input , Please try again by using valid inputs");
        }
        printf("\n\n");
    }
}


void add()
{
    printf("\n\n");
    printf("Number of patient entries existing in the database = %d\n\n",num);
    printf("How many patient entries would you like to add now: ");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {
   
        printf("\nEnter Patient's Name : \n");
        scanf("%s",x[i].name);
        fflush(stdin);
        printf("Enter Patient's disease : \n");
        scanf("%s",x[i].disease);
        fflush(stdin);
        printf("Enter Patient's age : \n");
        scanf("%d",&x[i].age);
        fflush(stdin);
        printf("Enter Patient's allotted Room No.: ");
        scanf("%d",&x[i].room);
        fflush(stdin);
        printf("Enter Caretaker's Phone Number : ");
        scanf("%d",&x[i].phone);
        fflush(stdin);
        printf("\n");
        j++;
        num++;
        printf("\nThis operation completed successfully\n");
    }
}

void view()
{
    for(i=0;i<num;i++)
    {
        printf("\n");
        printf("Patient Number: %d\n",i);
        printf("Patient Name: ");
        puts(x[i].name);
        printf("Disease: ");
        puts(x[i].disease);
        printf("Room No.: %d\nPhone No.: %d\nAge: %d",x[i].room,x[i].phone,x[i].age);
        printf("\n\n");
    }
}
void edit()
{
    int q,p;
    fflush(stdin);
    printf("What information do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.Disease\n3.Age\n4.Room No.\n5.Phone No.\n");
    printf("Your Option: ");
    scanf("%d",&q);
    if(q<=5)
    {
        printf("Enter the Serial No. of that patient to edit: (0 - %d) :",num-1);
        scanf("%d",&p);
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the corrected name :");
                scanf("%s",x[p].name);
                printf("\nThis operation completed successfully\n");

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the corrected Disease :");
                scanf("%s",x[p].disease);
                printf("\nThis operation completed successfully\n");
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the corrected Age :");
                scanf("%d",&x[p].age);
                printf("\nThis operation completed successfully\n");
            }

            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the corrected Room No. :");
                scanf("%d",&x[p].room);
                printf("\nThis operation completed successfully\n");
            }

            else if(q==5)
            {
                fflush(stdin);
                printf("Enter the corrected Phone No. :");
                scanf("%d",&x[p].phone);
                printf("\nThis operation completed successfully\n");
            }
        }
        else
        {
            printf("\n\nInvalid Serial No. of the patient\nPlease Try Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option given\nPlease Try Again!!\n\n");
    }
}


void del()
{
    int f,h;
    printf("Enter the serial number of the patient that you want to delete: ");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What information do you want to delete?\n");
        printf("1.Remove the whole record\n2.Remove only Name\n3.Remove only Disease\n4.Remove only Age\n5.Remove obly Room No.\n6.Remove only Phone No.\nYour Option: ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].disease,x[f+1].disease);
                x[f].age=x[f+1].age;
                x[f].room=x[f+1].room;
                x[f].phone=x[f+1].phone;
                f++;
            }
            num--;
            printf("\nThis operation completed successfully\n");
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Nil");
            printf("\nThis operation completed successfully\n");

        }
        else if(h==3)
        {
            strcpy(x[f].disease,"Nil");
            printf("\nThis operation completed successfully\n");
        }
        else if(h==4)
        {
            x[f].age=0;
            printf("\nThis operation completed successfully\n");
        }
        else if(h==5)
        {
            x[f].room=0;
            printf("\nThis operation completed successfully\n");
        }
        else if(h==6)
        {
            x[f].phone=0;
            printf("\nThis operation completed successfully\n");
        }

    }
    else
        printf("\n\nInvalid Serial number\n");

}
void read()
{
    FILE *fp = fopen("patient.txt","r");
    if(fp==NULL)
    {

        fp = fopen("patient.txt","w");
        fclose(fp);
        return 0;
    }

    num = fread(x, sizeof(struct ad),100, fp);
    fclose(fp);
}
void write()
{
    FILE *fp = fopen("patient.txt","w");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(x, sizeof(struct ad),num, fp);

    fclose(fp);
}

void save()
{
    FILE *fp = fopen("saved.txt", "w");
    if(fp == NULL)
    {
        printf("Error\n");
        return;
    }

    for(i=0;i<num;i++)
    {
        fprintf(fp, "Patient Number: %d\n", i);
        fprintf(fp, "Patient Name: %s\n", x[i].name);
        fprintf(fp, "Disease: %s\n", x[i].disease);
        fprintf(fp, "Room No.: %d\n", x[i].room);
        fprintf(fp, "Phone No.: %d\n", x[i].phone);
        fprintf(fp, "Age: %d\n", x[i].age);
        fprintf(fp, "\n");
    }

    fclose(fp);
}
