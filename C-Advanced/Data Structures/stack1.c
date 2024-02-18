#include<stdio.h>
int stack[5];
int top=-1;
void push(int data);
void pop();
void display();
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);//top=4
    display();
    push(60);
    pop();
    display();
}
void push(int data)
{
    if(top==4)
       {
          printf("stack overflow\n");
            return;
       }
    stack[++top]=data;
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("deleted element is %d \n",stack[top]);
    top--;
}
void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d\n",stack[i]);
    }
}
