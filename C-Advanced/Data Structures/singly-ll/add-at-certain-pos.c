#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *link;
};


struct node* add_at_end(struct node *ptr, int);

void add_at_pos(struct node* head,int,int);


int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 1;
        head->link = NULL;
        
        struct node *ptr = head;
        ptr=add_at_end(ptr,2);
        ptr=add_at_end(ptr,3);
        ptr=add_at_end(ptr,4);
        ptr=add_at_end(ptr,5);
        
        ptr = head;

        printf("Before adding elements in certain position : \n");
        while(ptr != NULL)
        {
                printf("%d ",ptr->data);
                ptr = ptr->link;
        }
        printf("\n");
        
        int data = 45, posi = 3;
        
        add_at_pos(head, data, posi);
        
        ptr = head;     
        
        printf("After adding elements in certain position : \n");
        while(ptr != NULL)
        {
                printf("%d ",ptr->data);
                ptr = ptr->link;
        }
        printf("\n");
        
        return 0;
}


struct node* add_at_end(struct node *ptr,int data)
{
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->link = NULL;
        
        ptr->link = temp;
        return temp;
}

void add_at_pos(struct node *head, int data, int pos)
{
        struct node *ptr = head;
        struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
        ptr2->data = data;
        ptr2->link = NULL;
        
        while(pos != 2)
        {
                ptr=ptr->link;
                pos--;
        }
        
        ptr2->link = ptr->link;
        ptr->link = ptr2; 
        
}
