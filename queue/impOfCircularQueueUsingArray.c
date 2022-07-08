#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int Size;
    int Front;
    int Rear;
    int *Q;
};
void createQueue(struct Queue *q,int size)
{
    q->Size=size;
    q->Front=q->Rear=0;
    q->Q=(int *)malloc(q->Size*sizeof(int));
}
void enQueue(struct Queue *q, int x)
{
    if((q->Rear+1)%q->Size==q->Front)
    printf("Queue is Full we can't insert more element.");
    else{
        q->Rear=((q->Rear+1)%q->Size);
        q->Q[q->Rear]=x;
    }
}
int deQueue(struct Queue *q)
{
    int x=-1;
    if(q->Front==q->Rear)
    printf("Queue is Empty So we can't perform deQueue");
    else{
        q->Front=(q->Front+1)%q->Size;
        x=q->Q[q->Front];
    }
    return x;
}
void Display(struct Queue *q)
{
    int i=q->Front+1;
    do{
        printf("%d ",q->Q[i]);
        i=(i+1)%q->Size;
    }while(i!=(q->Rear+1)%q->Size);

}
int main()
{
    struct Queue q;
    int size;
    printf("Enter the Size of a Queue:");
    scanf("%d",&size);
    createQueue(&q,size);

    enQueue(&q,10);
    enQueue(&q,20);
    enQueue(&q,30);
    enQueue(&q,40);
    enQueue(&q,50);
    enQueue(&q,60);

    deQueue(&q);


    Display(&q);


}
