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
    printf("Enter the size of Stack:");
    scanf("%d",&st->Size);
    st->Top=-1;
    st->S=(int *)malloc(st->Size*sizeof(int));
}
void displayStack(struct Stack st)
{
    printf("\nStack Elements Are:");
    for(int i=st.Top;i>=0;i--)
    {
        printf("%d ",st.S[i]);
    }
}
void push(struct Stack *st,int x)
{
    if(st->Top==st->Size-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        st->Top++;
        st->S[st->Top]=x;
    }
}
int pop(struct Stack *st)
{
    int x=-1;
    if(st->Top==-1)
    {
        printf("Stack is Empty.");
    }
    else
    {
        //st->Top--;
        x=st->S[st->Top--];
    }
    return x;
}
int peek(struct Stack st, int pos)
{
    int x=-1;
    if(st.Top-pos+1<0)
    {
        printf("Position is invalid");
    }
    else
    {
        x=st.S[st.Top-pos+1];
    }
    return x;
}
bool isEmpty(struct Stack st)
{
    if(st.Top==-1)
        return true;
    else
        return false;
}
bool isFull(struct Stack st)
{
    if(st.Top==st.Size-1)
    {
        return true;
    }
    else
        return false;
}
int main()
{
      struct Stack st;
      creatingStack(&st);
      push(&st,10);
      push(&st,5);
      push(&st,3);
      push(&st,1);
     // push(&st,0);
      displayStack(st);
     // int x=pop(&st);
      //printf("\nFirst Pop element:%d ",x);

      displayStack(st);
      int y=peek(st,4);
      printf("\nPeek value at certain position:%d",y);
      printf("\nStack is Empty or not(1 for True 0 for false):%d",isEmpty(st));
      printf("\nStack is Full or not(1 for True 0 for false):%d",isFull(st));
}
