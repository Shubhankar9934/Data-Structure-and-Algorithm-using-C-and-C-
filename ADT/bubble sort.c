#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void bubble(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1]){
            swap(&A[j],&A[j+1]);
            }
        }
    }
}
int main()
{
    int A[]={5,34,68,52,2,48};
    bubble(A,7);
    for(int i=0;i<7;i++)
    {
        printf("%d ",A[i]);
    }
}
