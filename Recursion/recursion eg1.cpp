#include<bits/stdc++.h>
using namespace std;
int fun1(int x)
{
    if(x>0)
    {
        cout<<x<<endl;
        fun1(x-1);
    }
    else
        return 0;
}
int main()
{
    int x=5;
    fun1(x);
}
