#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
}*first=NULL,*second=NULL;
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
void createLoopNode(struct Array *arr)
{
    int i;
    struct Node *temp,*last;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data=arr->A[0];
    second->next=second;
    last=second;
    for(i=1;i<arr->length;i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=arr->A[i];
        temp->next=last->next;
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
void displayLoopNode(struct Node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->next;
    }while(p!=second);
}
bool isLoopOrLinear(struct Node *p)
{
    struct Node *q;
    p=q=second;
    do
    {
        p=p->next;
        q=q->next;
        q=q!=NULL?q->next:q;

    }while(p && q && p!=q);
    return p=q?true:false;
}
int main()
{
    struct Array arr,arr2;

    printf("Enter the Size of an array:");
    scanf("%d",&arr.Size);
    printf("Enter the length of an array:");
    scanf("%d",&arr.length);
    arr.A=(int *)malloc(arr.Size*sizeof(int));
    createArray(&arr);
    createNode(&arr);
    printf("\nDisplaying Node using linklist:");
    displayNode(first);

    printf("\nEnter the Size of second array:");
    scanf("%d",&arr2.Size);
    printf("Enter the length of second array:");
    scanf("%d",&arr2.length);
    arr2.A=(int *)malloc(arr2.Size*sizeof(int));
    createArray(&arr2);
    createLoopNode(&arr2);
    printf("\nDisplaying linklist having loop:");
    displayLoopNode(second);

    int x=isLoopOrLinear(first);
    printf("\n%d",x);

}
