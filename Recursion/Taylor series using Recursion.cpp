#include<bits/stdc++.h>
using namespace std;
double e(int x, int n)
{
    static int p=1,f=1;
    float result;
    if(n==0){return 1;}
    else
    {
       result=e(x,n-1);
       p=p*x;
       f=f*n;
       return result+(double)p/f;
    }
}
int main()
{
    cout<<e(1,20);
}
