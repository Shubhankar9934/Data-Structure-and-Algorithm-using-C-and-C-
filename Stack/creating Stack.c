#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Stack
{
    int Size;
    int Top;
    int *S;
};
void creatingStack(struct Stack *st)
{
    printf("Enter the Size of Stack:");
    scanf("%d",&st->Size);
    st->Top=-1;
    st->S=(int *)malloc(st->Size*sizeof(int));
}
void displayStack(struct Stack st)
{
    printf("Stack element are:");
    for(int i=st.Size;i>=0;i--)
    {
        printf("%d ",st.S[i]);
    }
}
void push(struct Stack *st,int x)
{
    if(st->Top==st->Size-1){
        printf("Stack is Overflow");
    }
    else{
        st->Top++;
        st->S[st->Top]=x;
    }
}
int pop(struct Stack *st)
{
    int x=-1;
    if(st->Top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {
        x=st->S[st->Top];
        st->Top--;
    }
    return x;
}
int peek(struct Stack st,int pos)
{
    int x=-1;
    //Cheak valid index or not; index=top-pos+1;
    if(st.Top-pos+1<0||st.Top-pos+1>st.Size-1)
    {
        printf("Invalid Position");
    }
    else{
        x=st.S[st.Top-pos+1];
    }
    return x;
}
bool isEmpty(struct Stack st)
{
    return st.Top==NULL?true:false;
}
bool isFull(struct Stack st)
{
    return st.Top>st.Size-1?true:false;
}
int main()
{
    struct Stack st;
    creatingStack(&st);

    push(&st,30);
    push(&st,200);
    push(&st,40);
    push(&st,50);
    push(&st,60);
    displayStack(st);
   // pop(&st);
   // displayStack(st);
   // peek(st,3);
   // printf("%d ",isEmpty(st));
   // printf("%d",isFull(st));


}
