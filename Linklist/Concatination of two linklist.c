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
void createNode2(struct Array *arr)
{
    int i;
    struct Node *temp,*last;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data=arr->A[0];
    second->next=NULL;
    last=second;
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
void concatinationOfLinklist(struct Node *p,struct Node *q)
{
    p=first;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    q=second;
    p->next=q;
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

    printf("Enter the Size of second array:");
    scanf("%d",&arr2.Size);
    printf("Enter the length of second array:");
    scanf("%d",&arr2.length);
    arr2.A=(int *)malloc(arr2.Size*sizeof(int));
    createArray(&arr2);
    createNode2(&arr2);
    printf("\nDisplaying Node using linklist:");
    displayNode(second);

    concatinationOfLinklist(first,second);
    printf("\nDisplaying linklist After concatination:");
    displayNode(first);


}


