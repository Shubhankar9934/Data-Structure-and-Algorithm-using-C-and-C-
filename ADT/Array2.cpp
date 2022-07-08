#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<("Enter the 3-dimensional Array element:\n");
    int x=2,y=3,z=2;
    int ***A=new int**[x];
    int i,j,k;
    for(i=0;i<x;i++)
    {
      A[i]=new int*[y];
      for(j=0;j<y;j++)
      {A[i][j]=new int[z];}
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            for(k=0;k<z;k++)
            {
                cin>>*(*(*(A+i)+j)+k);
            }
        }
    }
    cout<<("Displaying 3-dimensional Array element:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            for(k=0;k<z;k++)
            {
                cout<<*(*(*(A+i)+j)+k);
            }
            cout<<("\n");
        }
        cout<<("\n");
    }
}
