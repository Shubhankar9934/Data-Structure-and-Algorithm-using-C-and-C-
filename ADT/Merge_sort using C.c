#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
};
void Set_array(struct Array arr)
{
    int i;
    printf("\nEnter Array element:");
    for(i=0;i<arr.length;i++)
    {
        scanf("%d",&arr.A[i]);
    }
}
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
struct Array* Merge_sort(struct Array *arr,struct Array *arr2)
{
    int i=0,j=0,k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr->length&&j<arr2->length)
    {
        if(arr->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr->A[i++];
        }
        else
        {
            arr3->A[k++]=arr2->A[j++];
        }
    }
        for(;i<arr->length;i++)
        {
            arr3->A[k++]=arr->A[i];
        }
        for(;j<arr2->length;j++)
        {
            arr3->A[k++]=arr2->A[j];
        }

    arr3->length=arr->length+arr2->length;
    arr3->size=k;
    return arr3;
}
struct Array* Union(struct Array *arr,struct Array *arr2)
{
    int i=0,j=0,k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr->length&&j<arr2->length)
    {
        if(arr->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr->A[i++];
        }
        else if(arr->A[i]>arr->A[j])
        {
            arr3->A[k++]=arr2->A[j++];
        }
        else
        {
            arr3->A[k++]=arr->A[i++];
            j++;
        }
    }
        for(;i<arr->length;i++)
        {
            arr3->A[k++]=arr->A[i];
        }
        for(;j<arr2->length;j++)
        {
            arr3->A[k++]=arr2->A[j];
        }

    arr3->length=arr->length+arr2->length;
    arr3->size=k;
    return arr3;
}
struct Array* Intersection(struct Array *arr,struct Array *arr2)
{
    int i=0,j=0,k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr->length&&j<arr2->length)
    {
        if(arr->A[i]<arr2->A[j])
        {
            i++;
        }
        else if(arr->A[i]>arr->A[j])
        {
            j++;
        }
        else if(arr->A[i]==arr->A[j])
        {
            arr3->A[k++]=arr->A[j++];
            i++;
        }
    }

    arr3->length=arr->length+arr2->length;
    arr3->size=k;
    return arr3;
}
struct Array* Difference(struct Array *arr,struct Array *arr2)
{
    int i=0,j=0,k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr->length&&j<arr2->length)
    {
        if(arr->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr->A[i++];
        }
        else if(arr->A[i]>arr->A[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
        for(;i<arr->length;i++)
        {
            arr3->A[k++]=arr->A[i];
        }

    arr3->length=arr->length+arr2->length;
    arr3->size=10;
    return arr3;
}
int main()
{
    struct Array arr;
    arr.size=10;
    arr.length=5;
    arr.A=(int *)malloc(arr.size*sizeof(int));
    Set_array(arr);
    Display(arr);

    struct Array arr2;
    arr2.size=10;
    arr2.length=5;
    arr2.A=(int *)malloc(arr2.size*sizeof(int));
    Set_array(arr2);
    Display(arr2);

    struct Array *arr3;
   // arr3=Merge_sort(&arr,&arr2);
   // Display(*arr3);
   // Union(&arr,&arr2);
   // Display(*arr3);
   // arr3=Intersection(&arr,&arr2);
   // Display(*arr3);
    arr3=Difference(&arr,&arr2);
    Display(*arr3);
}
