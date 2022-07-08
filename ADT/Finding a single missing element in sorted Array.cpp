#include<bits/stdc++.h>
using namespace std;
class Array
{
public:
    int *A;
    int size;
    int length;
};
void Display(class Array arr)
{
    cout<<("\nEnter the Array Elements:");
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<(" ");
    }
}
void Set_Array(class Array arr)
{
    cout<<("\nArray Elements are:");
    for(int i=0;i<arr.length;i++)
    {
        cin>>arr.A[i];
    }
}
int Min_element(class Array arr)
{
    int min=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
        {
            min=arr.A[i];
        }
    }
    return min;
}
int Find_single_missing_element_sorted_array(class Array arr)
{
    int difference=Min_element(arr);
    cout<<("\nMissing element are:");
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]-i!=difference)
        {
            cout<<i+difference;
            return 0;
        }
    }
    return 0;
}
void Find_more_missing_element_sorted_array(class Array arr)
{
    int difference=arr.A[0];
    cout<<("\nMissing element are:");
    for(int i=0;i<arr.length;i++)
    {
        if((arr.A[i]-i)!=difference)
        {
            while(difference<arr.A[i]-i)
            {
                cout<<i+difference<<(" ");
                difference++;
            }
        }
    }
}
int main()
{
    Array arr;
    cout<<("Enter the size of an Array:");
    cin>>arr.size;
    cout<<("Enter the length of an Array:");
    cin>>arr.length;
    arr.A=new int[arr.size];
    Set_Array(arr);
    Display(arr);
    //Find_single_missing_element_sorted_array(arr);
    Find_more_missing_element_sorted_array(arr);
    delete []arr.A;
}
