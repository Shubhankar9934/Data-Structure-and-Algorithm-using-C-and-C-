#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
    int length;
    int Size;
};
void createArray(struct Array *arr)
{
    printf("Enter Array element:");
    for(int i=0;i<arr->length;i++){
        scanf("%d",&arr->A[i]);
    }
}
void displayArray(struct Array arr)
{
    printf("Array element are:");
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}
struct Node
{
    int data ;
    struct Node *next;
}*first=NULL;
void createNode(struct Array *arr)
{
    int i;
    struct Node *temp,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=arr->A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<arr->length;i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=arr->A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void displayNode(struct Node *p)
{
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void insertAtSortedPosition(struct Node *p,int x)
{
    struct Node *temp,*tailptr;
    p=first;
    tailptr=NULL;
    while(p!=NULL&&p->data<x)
    {
        tailptr=p;
        p=p->next;
    }
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=tailptr->next;
    tailptr->next=temp;
}
int main()
{
    struct Array arr;
    printf("Enter the Size of an array:");
    scanf("%d",&arr.Size);
    printf("Enter the length of an array:");
    scanf("%d",&arr.length);
    arr.A=(int *)malloc(arr.length*sizeof(int));
    createArray(&arr);
    displayArray(arr);
    createNode(&arr);
    printf("\nDisplaying Node using linklist:");
    displayNode(first);
    insertAtSortedPosition(first,6);
    printf("\nDisplaying Node after insertion at sorted position:");
    displayNode(first);
}
