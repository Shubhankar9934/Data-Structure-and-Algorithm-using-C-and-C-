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
int countNode(struct Node *p)
{
    int count = 0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
void reverseElementOfLinklist(struct Node *p)
{
    struct Array arr2;
    arr2.A=(int *)malloc(countNode(p)*sizeof(int));
    int i=0;
    p=first;
    while(p!=NULL)
    {
        arr2.A[i]=p->data;
        p=p->next;
        i++;
    }
    p=first;
    i--;
    while(p!=NULL)
    {
        p->data=arr2.A[i];
        p=p->next;
        i--;
    }
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
    reverseElementOfLinklist(first);
    printf("\nDisplaying Node of linklist after reversing it's element :");
    displayNode(first);

}
