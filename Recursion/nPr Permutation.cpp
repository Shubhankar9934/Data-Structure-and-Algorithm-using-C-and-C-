#include<bits/stdc++.h>
using namespace std;
int fact(int a)
{
    if(a==0)
        return 1;
    else
        return a*fact(a-1);
}
double nPr(int n, int r)
{
    int t1,t2;
    t1=fact(n);
    t2=fact(n-r);
    return t1/t2;
}
int main()
{
    cout<<nPr(5,2);
}
