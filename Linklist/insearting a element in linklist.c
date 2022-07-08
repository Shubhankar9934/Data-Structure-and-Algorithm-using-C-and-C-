#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
    int Size;
    int length;
};
void createArray(struct Array *arr)
{
    printf("\nEnter the element of an Array:");
    for(int i=0;i<arr->length; i++)
    {
        scanf("%d",&arr->A[i]);
    }
}
void DisplayArray(struct Array arr)
{
    printf("\nEnter the element of an Array:");
    for(int i=0;i<arr.length; i++)
    {
        printf("%d",&arr.A[i]);
    }
}
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void createNode(struct Array *arr)
{
    int i;
    struct Node *temp,*last;
    first=(struct node *)malloc(sizeof(struct Node));
    first->data=arr->A[0];
    first->next=NULL;
    last = first;

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
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void recusiveDisplayNode(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d ",p->data);
        recusiveDisplayNode(p->next);
    }
}
void insertElementInLinklist(struct Node *ptr,int Pos,int value)
{
    struct Node *temp;
    if(Pos==0)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=value;
        temp->next=first;
        first=temp;
    }
    else if(Pos>0)
    {
        ptr=first;
        for(int i=0;i<Pos-1&&ptr!=NULL;i++)
        {
            ptr=ptr->next;
        }
    }
    if(ptr)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=value;
        temp->next=ptr->next;
        ptr->next=temp;
    }

}
int main()
{
    struct Array arr;
    printf("Enter the size of an  array :");
    scanf("%d",&arr.Size);
    printf("Enter the length of an array ");
    scanf("%d",&arr.length);
    arr.A=(int *)malloc(arr.Size*sizeof(int));

    createArray(&arr);
    createNode(&arr);
    recusiveDisplayNode(first);
    int pos,ele;
    printf("\nEnter the position you want to insert:");
    scanf("%d",&pos);
    printf("\nEnter a element you want to insert:  ");
    scanf("%d",&ele);
    insertElementInLinklist(first,pos,ele);
    recusiveDisplayNode(first);
}
