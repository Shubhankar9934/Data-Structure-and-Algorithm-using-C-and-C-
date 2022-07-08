#include<bits/stdc++.h>
using namespace std;
double Cosh(int x,int n)
{
    static double s;
    if(n==1)
        return s;
    else
    {
        s=1+(x*x*s)/((2*n-3)*(2*n-2));
        return Cosh(x,n-1);
    }
}
int main()
{
    cout<<Cosh(1,10);
}
