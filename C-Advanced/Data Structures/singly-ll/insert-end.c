#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *link;
};

void add_at_end(struct node *head, int);
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
        
        add_at_end(head,67);
        print(head);
        return 0;
}

void add_at_end(struct node *head, int data)
{
        struct node *ptr, *temp;
        ptr = head;
        temp = (struct node *)malloc(sizeof(struct node));
        
        temp->data = data;
        temp->link = NULL;
        
        while(ptr->link != NULL)
        {
                ptr = ptr->link;
        }
        ptr->link = temp;
}

void print(struct node *head)
{
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr = head;
        
        if(ptr == NULL)
                printf("Linked list is empty\n");
        
        while(ptr != NULL)
        {
                printf("%d ",ptr->data);
                ptr = ptr->link;
        }
        printf("\n");
}
