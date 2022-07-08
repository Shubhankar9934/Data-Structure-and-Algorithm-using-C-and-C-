#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    int i,n;
    cout<<("Enter the value upto which you want fibonacci : ");
    cin>>n;
    for(int i=0;i<=n;i++)
        cout<<fib(i)<<(" ");
}
