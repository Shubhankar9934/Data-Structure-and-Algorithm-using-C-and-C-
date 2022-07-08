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
void createArray(struct Array *arr)
{
    printf("\nEnter the element of an Array:");
    for(int i=0;i<arr->length; i++)
    {
        scanf("%d",&arr->A[i]);
    }
}
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
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void recursiveDisplay(struct Node *p)
{
    if(p!=NULL)
    {

        printf("%d ",p->data);
        recursiveDisplay(p->next);

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
int recursiveCount(struct Node *p)
{
    if(p==NULL)
    return 0;
    return recursiveCount(p->next)+1;
}
int sumOfNodes(struct Node *p)
{
    int sum=0;
    while(p!=NULL)
    {
       sum=sum+p->data;
       p=p->next;
    }
    return sum;
}
int recursiveSum(struct Node *p)
{
    if(p==NULL)
        return 0;
        else
    return recursiveSum(p->next)+p->data;
}
 int maxElementLinkilist(struct Node *p)
{
    int max=INT_MIN;
    while(p)
    {
        if(p->data>max)
        {
            max=p->data;
            p=p->next;
        }
    }
    return max;
}
int recursiveMAX(struct Node *p)
{
    int x=INT_MIN;
    if(p==NULL)
    {
        return x;
    }
    x=recursiveMAX(p->next);
    if(x>p->data)
    {
        return x;
    }
    else
        return p->data;
}
int minElementLinkilist(struct Node *p)
{
    int min=INT_MAX;
    while(p)
    {
        if(p->data<min)
        {
            min=p->data;
            p=p->next;
        }
    }
    return min;
}
int recursiveMIN(struct Node *p)
{
    int x=INT_MAX;
    if(p==NULL)
        return x;
    x=recursiveMIN(p->next);
    if(x<p->data)
        return x;
    else
        return p->data;
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
    int numOfNodes=recursiveCount(first);
    printf("\nNumber of nodes:%d",numOfNodes);
    int sum=recursiveSum(first);
    printf("\nSum of all element of an array using nodes:%d",sum);



   int max1=recursiveMAX(first);
   printf("\nMaximum element in Array finding via linklist:%d",max1);

   int min1=recursiveMIN(first);
   printf("\nMinimum element in Array finding via linklist:%d",min1);

}
