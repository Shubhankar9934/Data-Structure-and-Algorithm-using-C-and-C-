#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n>0){return n+fun(n-1);}
    else {return 0;}
}
int main()
{
    int x;
    cout<<("Enter natural number upto which you want sum: ")<<endl;
    cin>>x;
    cout<<("Sum of natural number is:")<<fun(x);
}
