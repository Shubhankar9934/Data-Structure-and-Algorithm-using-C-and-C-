#include<bits/stdc++.h>
using namespace std;
int fun2(int x)
{
    if(x>0)
    {
        fun2(x-1);
        cout<<x<<endl;
    }
    else
        return 0;
}
int main()
{
    int x=5;
    fun2(5);
    return 0;
}
