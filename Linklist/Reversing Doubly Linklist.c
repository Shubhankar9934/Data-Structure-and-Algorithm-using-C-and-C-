#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
    int Size;
    int length;
};
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;
void createArray(struct Array *arr)
{
    printf("Enter the element of an Array:");
    for(int i=0;i<arr->length;i++)
    {
        scanf("%d",&arr->A[i]);
    }
}
void displayArray(struct Array arr)
{
    printf("\nArray Elements are:");
    for(int i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

void createNode(struct Array *arr)
{
    struct Node *temp, *last;
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
    }
}
void displayNode(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void reverseDoublyLinklist(struct Node *p)
{
    p=first;
    struct Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));
    while(p!=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL&&p->next==NULL)
        first=p;
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
    displayNode(first);

    reverseDoublyLinklist(first);
    printf("\nDisplay doubly linklist after Reversing:\n");
    displayNode(first);
}
