#include<bits/stdc++.h>
using namespace std;
int main()
{

    //One Dimensional Array;
    /*int *p=new int[5];
    cout<<("Enter an element of an Array:")<<endl;
    for(int i=0;i<5;i++){cin>>*(p+i);}
    for(int i=0;i<5;i++){
    cout<<*(p+i)<<(" ")<<p[i]<<(" ")<<*(p)+i<<endl;}*/

    //2-Dimensional Array:
    /*cout<<("Enter the Array element:\n");
    int i,j,m=4,n=4;
    int **Q=new int*[4];
    for(i=0;i<4;i++){Q[i]=new int[4];}
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>*(*(Q+i)+j);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<*(*(Q+i)+j)<<(" ");
        }
        cout<<("\n");
    }*/

    int var =10;
    int *ptr;
    ptr=&var;

    cout<<var<<endl;
    cout<<&var<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
}
