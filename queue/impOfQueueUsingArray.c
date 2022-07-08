#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Queue
{
    int Size;
    int Front;
    int Rare;
    int *Q;
};
void CreateQueue(struct Queue *q,int size)
{
    q->Size=size;
    q->Front=q->Rare=-1;
    q->Q=(int *)malloc(q->Size*sizeof(int));
}
void enQueue(struct Queue *q,int x)
{
    if(q->Rare==q->Size-1)
        printf("\nQueue is Full so we can't insert new element.");
    else{
        q->Rare++;
        q->Q[q->Rare]=x;
    }
}
int deQueue(struct Queue *q)
{
    int x=-1;
    if(q->Front==q->Rare){
        printf("Queue is Empty We Can't perform delete Operation.\n");
    }
    else{
        q->Front++;
        x=q->Q[q->Front];
    }
    return x;
}
void Display(struct Queue q)
{
    int i;
    for(i=q.Front+1;i<=q.Rare;i++)
    {
        printf("%d ",q.Q[i]);
    }
    printf("\n");
}

int main()
{
   struct Queue q;
   CreateQueue(&q,6);
   enQueue(&q,10);
   enQueue(&q,20);
   enQueue(&q,30);
   enQueue(&q,40);
   enQueue(&q,50);
   enQueue(&q,60);

   deQueue(&q);
   deQueue(&q);
   deQueue(&q);
   deQueue(&q);
   deQueue(&q);

   Display(q);
}
