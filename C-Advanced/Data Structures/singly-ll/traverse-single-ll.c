#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *link;
};

void count_nodes(struct node *head);

int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 45;
        head->link = NULL;
        
        struct node *curr = malloc(sizeof(struct node));
        curr->data = 98;
        curr->link = NULL;
        head->link = curr;
        
        count_nodes(head);  
             
        curr = malloc(sizeof(struct node));
        curr->data = 3;
        curr->link = NULL;
        
        head->link->link = curr;
        
        count_nodes(head);
             
        return 0;
}

void count_nodes(struct node *head)
{
        int count=0;
        if(head==NULL)
                printf("Linked List id empty\n");
         struct node *ptr = NULL;
         ptr = head;
         while(ptr!= NULL)
         {
                 count++;
                 ptr = ptr->link;
         }       
         printf("Number of nodes = %d\n",count);
}
