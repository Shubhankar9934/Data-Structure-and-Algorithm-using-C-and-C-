#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(struct Node *p,int x)
{
    //Cheak weather the stack is full or empty because if stack is full we can't push any element;
    struct Node *temp;
    if(temp==NULL){
        printf("Stack is overflow");
    }
    else{
        //insert from front;
        p->data=x;
        p->next=top;
        top=p;
    }
}
int pop(struct Node *p)
{
    int x=-1;
    //cheak weather the stack is empty or not because if stack is empty we can't pop any element;
    if(top==NULL)
    {
        printf("Stack is empty.");
    }
    else
    {

        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
    return x;
}
int peek(struct Node *p,int pos)
{
    // first Move the pointer to the given  position;
    for(int i=0;p!=NULL&&i<pos-1;i++)
    {
        p=p->next;
    }
    if(p!=NULL){
        return p->data;
    }else{
        return -1;
    }

}
bool isEmpty()
{
    return top==NULL?true:false;
}
bool isFull()
{
    struct Node *p;
    return p==NULL?true:false;
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
    push(top,30);
    Display();

    return 0;
}
