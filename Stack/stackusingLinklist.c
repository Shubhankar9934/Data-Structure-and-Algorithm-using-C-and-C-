#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x)
{
    struct Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));

    if(temp==NULL){
        printf("Stack is Overflow.");
    }else{
        temp->data=x;
        temp->next=top;
        top=temp;
    }
}
int pop()
{
    int x=-1;
    struct Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));
    if(top==NULL){
        printf("Stack is Empty.");
    }else{
        top=temp;
        top=top->next;
        x=temp->data;
        free(temp);
    }
    return x;
}
int peek(int pos)
{
    int x=-1;
    struct Node *temp;
    temp=top;
    for(int i=0;i<pos-1&&temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp!=NULL)
      return temp->data;
      return -1;
}
bool isEmpty()
{
    return top!=NULL?false:true;
}
bool isFull()
{
    struct Node *temp;
    bool r=temp!=NULL?true:false;
    return r;
}
void Display()
{
    struct Node *p;
    p=top;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;

    }
    printf("\n");
}
int main()
{
    push(30);
    push(50);
    push(70);
    Display();
    int x=pop();
    printf("%d",x);

}
