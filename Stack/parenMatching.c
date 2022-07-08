#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
struct Stack
{
    int size;
    int Top;
    int *S;
};
void push(struct Stack *st,int x)
{
    //First cheak weather the stack is full or not because if stack is full we can't insert a element
    if(st->Top==st->size-1){
        printf("Stack is Overflow.");
    }else{
        //Increment Top;
        st->Top++;
        // Insert the value;
        st->S[st->Top]=x;
    }
}
int pop(struct Stack *st)
{
    //First Cheak weather the stack is empty or full , if stack is empty we can't delete anything;
    int x;
    if(st->Top==-1){
        printf("Stack is Empty");
    }
    else{

        // take the value into x and then return it.
        x=st->S[st->Top];
        // Decrement Top first;
        st->Top--;
    }
    return x;
}
int peek(struct Stack *st,int Pos)
{
    int x=-1;
    // Cheak given Position is valid or not;
    if(st->Top-Pos+1<0)
    {
        printf("Invalid Position.");
    }
    else
    {
        x=st->S[st->Top-Pos+1];
    }
    printf("%d",x);
}
void Display(struct Stack st)
{
 int i;
 for(i=st.Top;i>=0;i--)
 printf("%d ",st.S[i]);
 printf("\n");

}
bool isEmpty(struct Stack st)
{
    return st.Top==-1?true:false;
}
bool isFull(struct Stack st)
{
    return st.Top>st.size-1?true:false;
}
int main()
{

    struct Stack st;
    st.Top=-1;
    printf("Enter the Size of Stack:");
    scanf("%d",&st.size);
    st.S=(struct Stack *)malloc(sizeof(struct Stack));

    push(&st,30);
    push(&st,50);
    push(&st,70);
    Display(st);
    pop(&st);
    Display(st);

    peek(&st,2);




}
