#include<bits/stdc++.h>
using namespace std;
int Power(int x,int n)
{
    if(n>0){return x*Power(x,n-1);}
    else {return 1;}
}
int main()
{
    int a,b;
    cout<<("Enter base and it's power:");
    cin>>a>>b;
    cout<<("Power value is ")<<Power(a,b);
}
