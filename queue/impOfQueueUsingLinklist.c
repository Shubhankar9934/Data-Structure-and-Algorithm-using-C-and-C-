#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*Front=NULL,*Rear=NULL;

void enQueue(int x)
{
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
    if(temp==NULL){
        printf("Queue is FULL");
    }
    else{
        temp->data=x;
        temp->next=NULL;
        if(Front==NULL)
        {
            Front=Rear=temp;
        }
        else{
            Rear->next=temp;
            Rear=temp;
        }
    }
}
int deQueue()
{
    int x=-1;
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
    if(Front==NULL)
        printf("Queue is Empty");
    else{
        temp=Front;
        Front=Front->next;
        x=temp->data;
        free(temp);
    }
    return x;
}
void Display()
{
    struct Node *p=Front;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);

    deQueue();
    deQueue();

    Display();

}
