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
int countNode(struct Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
bool isSorted(struct Node *p)
{
    int x=INT_MIN;
    while(p!=NULL)
    {
        if(p->data<x)
            return false;
        x=p->data;
        p=p->next;
    }
    return true;
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
    printf("\nLinklist is Sorted or not(if result is 0 implies Not Sorted and if 1 implies Sorted): %d",isSorted(first));

}
