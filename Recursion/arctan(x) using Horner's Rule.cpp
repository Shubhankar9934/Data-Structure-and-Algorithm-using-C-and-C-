#include<bits/stdc++.h>
using namespace std;
double arctan(int x,int n)
{
    static double s=1;
    if(n==1)
        return s;
    else
    {
        s=x*(1-x*x*x*s/(2*n-1));
        return arctan(x,n-1);
    }
}
int main()
{
    cout<<arctan(1,10);
}
