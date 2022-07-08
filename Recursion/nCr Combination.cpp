#include<bits/stdc++.h>
using namespace std;
int fact(int a)
{
    if(a==0)
        return 1;
    else
        return a*fact(a-1);
}
double nCr(int n,int r)
{
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return t1/(t2*t3);
}
int main()
{
    cout<<nCr(6,2);
}
