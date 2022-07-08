#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    else {return 0;}
}
int main()
{
    int x=5;
    cout<<fun(x)<<endl;
    return 0;
}
