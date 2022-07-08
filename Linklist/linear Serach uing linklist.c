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
    int data;
    struct Node *next;
}*first=NULL;
void createNode(struct Array *arr)
{
    int i;
    struct Node *last,*temp;
    first=(struct Node *)malloc(sizeof(struct Node *));
    first->next=NULL;
    last=first;
    for(i=0;i<arr->length;i++)
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
void createArray(struct Array *arr)
{
    printf("\nEnter the element of an Array:");
    for(int i=0;i<arr->length; i++)
    {
        scanf("%d",&arr->A[i]);
    }
}
void linearSearch(struct Node *p)
{
    int key;
    printf("\nEnter the key element you want to search:");
    scanf("%d",&key);
    while(p!=NULL)
    {
        if(key==p->data)
        {
            printf("Search is successful");
            return 0;
        }
        p=p->next;
    }
    printf("\nSearch is unsuccessful");
}
struct Node * recursiveLinearSearch(struct Node *p,int key)
{
        if(key==NULL)
        return NULL;
        if(key==p->data)
        return (p);
        return recursiveLinearSearch(p->next,key);
}
struct Node * LSearch(struct Node *p,int key)
{
 struct Node *q;

 while(p!=NULL)
 {
   if(key==p->data)
   {
       q->next=p->next;
       p->next=first;
       first=p;
       return p;
   }
       q=p;
       p=p->next;
 }
 return NULL;

}
int main()
{
    struct Array arr;
    printf("Enter the size of an array:");
    scanf("%d",&arr.Size);


    printf("Enter the length of an array :");
    scanf("%d",&arr.length);
    arr.A=(int *)malloc(arr.Size*sizeof(int));
   // int B[10]={1,2,3,4,5,6,7,8,9,10};

    createArray(&arr);


    createNode(&arr);
    printf("\nDisplaying using linklist:");
    displayNode(first);
    linearSearch(first);

}

