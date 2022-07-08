#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};
struct Queue
{
    int Size;
    int Front;
    int Rear;
    struct Node **Q;
};
void create(struct Queue *q,int size)
{
    q->Size=size;
    q->Front=q->Rear=0;
    q->Q=(struct Node **)malloc(q->Size*sizeof(struct Node *));
}
void enQueue(struct Queue *q,struct Node* x)
{
    if((q->Rear+1)%q->Size==q->Front)
    printf("Queue is Full we can't insert more element.");
    else{
        q->Rear=((q->Rear+1)%q->Size);
        q->Q[q->Rear]=x;
    }
}
struct Node* deQueue(struct Queue *q)
{
    struct Node* x=NULL;
    if(q->Front==q->Rear)
    printf("Queue is Empty So we can't perform deQueue");
    else{
        q->Front=(q->Front+1)%q->Size;
        x=q->Q[q->Front];
    }
    return x;
}
int isEmpty(struct Queue q)
{
    return q.Front==q.Rear;
}
#endif // QUEUE_H_INCLUDED
