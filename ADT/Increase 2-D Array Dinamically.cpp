#include<bits/stdc++.h>
using namespace std;
int main()
{
    int **P=new int*[2];//First we want create 2*2 Array;
    for(int i=0;i<2;i++)
    {
        P[i]=new int[2];
    }
    cout<<("Enter the Element in 2-dimensional Array:");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>*(*(P+i)+j);
        }
    }
    cout<<("Displaying 2-Dimensional Array:")<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<*(*(P+i)+j)<<(" ");
        }
        cout<<("\n");
    }
    //Now increasing size of 2-dimensional Array;
    int **Q=new int*[3];
    for(int i=0;i<3;i++)
    {
        Q[i]=new int[3];
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            *(*(Q+i)+j)=*(*(P+i)+j);
        }
    }
    delete []P;
    P=Q;
    Q=nullptr;
    cout<<("Displaying 2-Dimensional Array After Size is changed:")<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<*(*(P+i)+j)<<(" ");
        }
        cout<<("\n");
    }

}
