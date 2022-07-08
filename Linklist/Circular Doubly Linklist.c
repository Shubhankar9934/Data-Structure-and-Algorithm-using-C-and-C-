#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
    int length;
    int Size
};
void createArray(struct Array *arr)
{
    printf("Enter the Array element:\n");
    for(int i=0;i<arr->length;i++)
    {
        scanf("%d",&arr->A[i]);
    }
}
void displayArray(struct Array arr)
{
    printf("Array Elements are:");
    for(int i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}*first=NULL;
void createNode(struct Array *arr)
{
    struct Node *temp,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=arr->A[0];
    first->prev=NULL;
    first->next=NULL;
    last=first;

    for(int i=1;i<arr->length;i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=arr->A[i];
        temp->next=last->next;
        temp->prev=last;
        last->next=temp;
        last=temp;
        last->next=first->prev;
    }
}
void displayDoublyCircularLinklist(struct Node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->next;
    }while(p!=first);
}
int countNode(struct Node *p)
{
    int count=0;
    do
    {
        count++;
        p=p->next;
    }while(p!=NULL);
    return count;
}
void insertFirstCircularDoublyLinklist(struct Node *p,int pos,int x)
{
        if(pos<1 || pos>countNode(p))return ;
        if(pos==1){
        struct Node *temp;
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=x;
        temp->prev=first->prev;
        temp->next=first;
        first=temp;
        }
        if(pos>1)
        {
            for(int i=0;i<pos-1;i++)
            {
                p=p->next;
            }
            struct Node *temp;
            temp=(struct Node *)malloc(sizeof(struct Node));
            temp->data=x;
            temp->prev=p;
            temp->next=p->next;
            p=temp->prev;
            if(p->next!=first)
            p->next=temp;
        }
}

int main()
{
    struct Array arr;
    printf("Enter the size of an Array:");
    scanf("%d",&arr.Size);
    printf("Enter the length of an Array:");
    scanf("%d",&arr.length);
    arr.A=(int *)malloc(arr.Size*sizeof(int));
    createArray(&arr);
    displayArray(arr);

    createNode(&arr);
    printf("\nDisplay doubly linklist:\n");
    displayDoublyCircularLinklist(first);
    insertFirstCircularDoublyLinklist(first,5,30);
    printf("\nDisplay doubly linklist:\n");
    displayDoublyCircularLinklist(first);
}
