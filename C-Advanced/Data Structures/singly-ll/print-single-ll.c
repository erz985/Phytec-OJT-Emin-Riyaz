#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *link;
};

void print(struct node *head);

int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 45;
        head->link = NULL;
        
        struct node *curr = malloc(sizeof(struct node));
        curr->data = 98;
        curr->link = NULL;
        head->link = curr;
        
        curr = malloc(sizeof(struct node));
        curr->data = 3;
        curr->link = NULL;
        
        head->link->link = curr;
        
        print(head);
        return 0;
}

void print(struct node *head)
{
        if(head == NULL)
                printf("Linked list is empty\n");
        
        struct node *ptr = NULL;
        ptr = head;
        
        while(ptr != NULL)
        {
                printf("%d ",ptr->data);
                ptr = ptr->link;
                
        }       
        printf("\n");  
}
