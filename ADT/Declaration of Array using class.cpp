#include<bits/stdc++.h>
using namespace std;
class Array
{
private:
    int *A;
    int Size;
    int length;
public:
Array(int sz=0,int len=0)
{
    Size=sz;
    length=len;
    A=new int[Size];
}
void Set_array();
void Get_array();
/*void Append();
void Insert_element();
void delete_element();
int Linear_search(class Array arr);
int Binary_search(class Array arr);
void Set_element(class Array *arr);
int Sum_array_element(class Array arr);
void Avg_array_element(class Array arr);
void swap(int *x,int *y);
void Reverse_array(class Array *arr);
void Left_shift_array(class Array *arr);
void Right_shift_array(class Array *arr);
int isSorted(class Array arr);
void Negetive_onLeft(class Array *arr);
int Inset_element_sort(class Array *arr);
int Get_element(class Array arr);
int Inset_element_sort(class Array *arr);
class Array* Merge_sort(class Array *arr,class Array *arr2);*/
);

void Array :: Set_array()
{
    cout<<("Enter the element of an Array:\n");
    for(int i=0;i<arr.length;i++)
    {
        cin>>*(arr.A+i);
    }
}
void Array:: Get_array()
{
    cout<<("\nDisplaying Element of an Array:");
    for(int i=0;i<arr.length;i++)
    {
        cout<<*(arr.A+i)<<(" ");
    }
}
/*void Array::Append(class Array *arr)
{
    int x;
    cout<<("\nEnter a element you want to Append in this array:");
    cin>>x;
    if(arr->length<arr->Size)
    {
       arr->A[arr->length]=x;
       arr->length++;
    }
    else
    {
        cout<<("You can't insert at this position");
    }
}
void Array::Insert_element(class Array *arr)
{
    int index;
    cout<<("\nEnter the index where you want to Insert an element:");
    cin>>index;
    int x;
    cout<<("\nEnter an element you want to insert at a given index:");
    cin>>x;
    if(index>arr->length&&index<0)
    {
        cout<<("You can't insert at this position");
    }
    else
    {
        for(int i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}
void Array::delete_element(class Array *arr)
{
    int index;
    cout<<("\nEnter the index you want to delete:");
    cin>>index;
    if(index>=0&&index<=arr->length)
    {
        for(int i=index;i<=arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
}
int Array:: Linear_search(class Array arr)
{
    int key;
    cout<<("\nEnter a key element you want to search in this array:");
    cin>>key;
    for(int i=0;i<=arr.length-1;i++)
    {
        if(arr.A[i]==key)
        {
            cout<<("Search is successful and it is found at index ")<<i<<endl;
            return 0;
        }
    }
    cout<<("Search is unsuccessful ");
    return 0;

}
int Array:: Binary_search(class Array arr)
{
    int key;
    cout<<("\nEnter a key element you want to search in this array:");
    cin>>key;
    int low=0;
    int high=arr.length;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(key==arr.A[mid]){
            cout<<("Search is successful")<<endl;
            return 0;
        }
        else if(key<arr.A[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    cout<<("Search is Unsuccessful");
    return 0;
}
 int Array:: Get_element(class Array arr)
{
    int index,i;
    cout<<("\nEnter the index of an element you are looking for:");
    cin>>index;
    for( i=0;i<arr.length;i++)
    {
        if(index>=0&&index<arr.length)
        {
            if(arr.A[i]==arr.A[index])
            {
                cout<<("\nValue of element at a given index is ")<<arr.A[i];
                return 0;
            }
        }
    }
    cout<<("\nNot a valid index");
}
void Array::Set_element(class Array *arr)
{
    int index;
    int value;
    cout<<("\nEnter the index where you want to set an element");
    cin>>index;
    cout<<("Enter the value you want to assign at given index:");
    cin>>value;
        if(index>=0&&index<arr->length)
        {
            arr->A[index]=value;
        }
}
int Array::Sum_array_element(class Array arr)
{
    int total=0;
    for(int i=0;i<arr.length;i++)
    {
        total=total+arr.A[i];
    }
    cout<<("\nSum of all element of a array is ")<<total<<endl;
}
void Array::Avg_array_element(class Array arr)
{
    int total=0;
    double Avg;
    for(int i=0;i<arr.length;i++)
    {
        total=total+arr.A[i];
    }
    Avg=(double)total/arr.length;
    cout<<("\nAverage of all element of an array is ")<<Avg;
}
void Array:: swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void Array::Reverse_array(class Array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}
void Array::Left_shift_array(class Array *arr)
{
    int i;
    int x=arr->A[0];
    for(i=0;i<arr->length;i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=x;
}
void Array::Right_shift_array(class Array *arr)
{
    int i;
    int x=arr->A[arr->length-1];
    for(i=arr->length-1;i>0;i--)
    {
        arr->A[i]=arr->A[i-1];
    }
    arr->A[0]=x;
}
int Array:: isSorted(class Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            cout<<("Array is not sorted");
            return 0;
        }
    }
    cout<<("Array is sorted.");
    return 0;
}
void Array:: Negetive_onLeft(class Array *arr)
{
    int i=0,j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0){i++;}
        while(arr->A[j]>0){j--;}
        if(i<j)
        {
            swap(&arr->A[i],&arr->A[j]);
        }
    }

}
int Array::Inset_element_sort(class Array *arr)
{
    int i=arr->length-1;
    int value;
    cout<<("\nEnter the element you want to insert in sorted array:");
    cin>>value;
    if(arr->length==arr->Size){return 0;}
    while(i>=0&&arr->A[i]>value)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=value;
    arr->length++;
}
Array* Array:: Merge_sort( Array arr2)
{
    int i=0,j=0,k=0;
    Array *arr3=new Array[arr.length+arr2.length];
    while(i<arr.length&&j<arr2.length)
    {
        if(arr.A[i]<arr2.[j])
        {
            arr3->A[k++]=arr.A[i++];
        }
        else
        {
            arr3->A[k++]=arr2.A[j++];
        }
        for(;i<arr.length;i++){arr3->A[k++]=arr.A[i];}
        for(;j<arr2.length;j++){arr3->A[k++]=arr2.A[j];}
    }
    arr3->length=arr.length+arr2.length;
    arr3->Size=arr->Size+arr3->Size;
    return arr3;
}*/
int main()
{
    Array arr;
    cout<<("Enter the Size of an array:");
    cin>>arr.Size;
    arr.A=new int[arr.Size];
    cout<<("Enter the length of an array:");
    cin>>arr.length;

    Set_array();
    Get_array();
   /* Append(&arr);
    Get_array(arr);
    Insert_element(&arr);
    Get_array(arr);
    delete_element(&arr);
    Get_array(arr);
    Linear_search(arr);
    Binary_search(arr);
    Get_element(arr);
    Set_element(&arr);
    Get_array(arr);
    Sum_array_element(arr);
    Avg_array_element(arr);
    Reverse_array(&arr);
    Get_array(arr);
    Left_shift_array(&arr);
    Get_array(arr);
    Right_shift_array(&arr);
    Get_array(arr);
    isSorted(arr);
    Negetive_onLeft(&arr);
    Get_array(arr);
    Inset_element_sort(&arr);
    Get_array(arr);*/
    //Merge sort(Technique){we need two sorted array:\n}
  /*  Array arr2;
    cout<<("Enter the Size of an array:");
    cin>>arr2.Size;
    arr2.A=new int[arr2.Size];
    cout<<("Enter the length of an array:");
    cin>>arr2.length;

    Set_array(arr2);
    Get_array(arr2);

    Array *arr3;
    Merge_sort(&arr,&arr2);
    //Set_array(arr3);
    Get_array(arr3);*/


}
