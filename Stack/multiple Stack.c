#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Stack
{
    int Size;
    int Top1;
    int Top2;
    int *S;
};
void creatingStack(struct Stack *st)
{
    printf("Enter the size of Stack:");
    scanf("%d",&st->Size);
    st->Top1=-1;
    st->Top2=st->Size;
    st->S=(int *)malloc(st->Size*sizeof(int));
}
void displayStack_first(struct Stack st)
{
    printf("\nStack first Elements Are:");
    for(int i=st.Top1;i>=0;i--)
    {
        printf("%d ",st.S[i]);
    }
    printf("\n");
}
void displayStack_second(struct Stack st)
{
    printf("\nStack Second Elements Are:");
    for(int i=st.Top2;i<st.Size;i++)
    {
        printf("%d ",st.S[i]);
    }
    printf("\n");
}
void push_first(struct Stack *st,int x)
{
    if(st->Top1>st->Top2-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        st->Top1++;
        st->S[st->Top1]=x;
    }
}
void push_second(struct Stack *st,int x)
{
    if(st->Top1>st->Top2-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        st->Top2--;
        st->S[st->Top2]=x;
    }
}
int pop_first(struct Stack *st)
{
    int x=-1;
    if(st->Top1==-1)
    {
        printf("Stack is Empty.");
    }
    else
    {
        //st->Top--;
        x=st->S[st->Top1--];
    }
    return x;
}
int pop_second(struct Stack *st)
{
    int x=-1;
    if(st->Top2>st->Size)
    {
        printf("Stack is Empty.");
    }
    else
    {
        //st->Top--;
        x=st->S[st->Top2++];
    }
    return x;
}

int main()
{
      struct Stack st;
      creatingStack(&st);
      push_first(&st,10);
      push_first(&st,5);

      push_second(&st,3);
      push_second(&st,1);
      push_second(&st,0);

      displayStack_first(st);
      displayStack_second(st);

      int x=pop_first(&st);
      printf("\nPop out from first Stack:%d ",x);
      displayStack_first(st);

      int y=pop_second(&st);
      printf("\nPop out from Second Stack:%d ",y);
      displayStack_second(st);

      return 0;
}

