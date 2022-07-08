#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size1;
    cout<<("Enter the Size of an Array:");
    cin>>size1;

    int *P=new int[size1];
    cout<<("Enter the Array element:");
    for(int i=0;i<size1;i++)
    {
        cin>>*(P+i);
    }

    cout<<("Displaying Array :")<<endl;
    for(int i=0;i<size1;i++)
    {
        cout<<*(P+i)<<(" ");
    }

    int size2;
    cout<<("\nEnter the new size of an Array:");
    cin>>size2;
    int *Q=new int[size2];

    for(int i=0;i<size1;i++)
    {
        Q[i]=P[i];
    }
    delete []P;
    P=Q;
    Q=nullptr;
    cout<<("Displaying  Fresh Array :")<<endl;
    for(int i=0;i<size2;i++)
    {
        cout<<*(P+i)<<(" ");
    }
    return 0;

}
