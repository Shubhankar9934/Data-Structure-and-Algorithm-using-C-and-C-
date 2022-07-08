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
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
void insertAtFirst(struct Node *p,int x)
{
    struct Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=first;
    first=temp;
}
void insertAtPosition(struct Node *p,int pos,int x)
{
    struct Node *temp;
    if(pos<0 || pos>countNode(p))return;

    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=x;
    if(pos==0)
    {
        temp->next=first;
        first=temp;
    }
    else{
    for(int i=0;i<pos-1;i++)
    {
        p=p->next;
    }
    temp->next=p->next;
    p->next=temp;
    }
}
void insertAtlast(int x)
{
    struct Node *temp,*last;
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if(first==NULL)
    {
        first=temp=last;
    }
    else{
       // last=(struct Node *)malloc(sizeof(struct Node));
        last->next=temp;
        temp=last;
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
    insertAtFirst(first,25);
    printf("\nDisplaying Node after insertion at first position:");
    displayNode(first);
    insertAtPosition(first,0,12);
    printf("\nDisplaying Node after insertion at given position:");
    displayNode(first);
    insertAtlast(30);
    printf("\nDisplaying Node after insertion at last position:");
    displayNode(first);


}
