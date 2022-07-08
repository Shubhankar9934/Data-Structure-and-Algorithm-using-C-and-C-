#include<bits/stdc++.h>
using namespace std;
class Array
{
public:

    int *A;
    int size;
    int length;
};
void Set_Array(class Array arr)
{
    cout<<("Enter elements in an Array:");
    for(int i=0;i<arr.length;i++)
    {
        cin>>arr.A[i];
    }
}
void Display(class Array arr)
{
    cout<<("Elements are:");
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<(" ");
    }
}
int Max_element(class Array arr)
{
    int max=0;
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]>arr.A[max])
        {
            arr.A[max]=arr.A[i];
        }
    }
    return arr.A[max];
}
int Min_element(class Array arr)
{
    int min=0;
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]<arr.A[min])
        {
            arr.A[min]=arr.A[i];
        }
    }
    return arr.A[min];
}
void Bitset_Hash_Missing_Element(class Array arr,class Array *bits,int low,int high)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        bits->A[arr.A[i]]++;
    }
    for(i=low;i<=high;i++)
    {
        if(bits->A[i]==0)
        {
            cout<<("\nMissing Element = ")<<i;
        }
    }
}
int main()
{
    Array arr,bits;
    cout<<("Enter size of an array:");
    cin>>arr.size;
    cout<<("Enter length of an array:");
    cin>>arr.length;
    arr.A=new int[arr.size];
    Set_Array(arr);
    Display(arr);

    int high=Max_element(arr);
    int low=Min_element(arr);
    bits.A=new int[high];
    Bitset_Hash_Missing_Element(arr,&bits,low,high);





    return 0;
}
