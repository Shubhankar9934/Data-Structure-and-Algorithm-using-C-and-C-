#include<bits/stdc++.h>
using namespace std;
double Sinh(int x,int n)
{
    static double s=1;
    if(n==1)
        return s;
    else
    {
        s=x*(1+((x*x*s)/((2*n-1)*(2*n-2))));
        return Sinh(x,n-1);
    }
}
int main()
{
    cout<<Sinh(1,10);
}
