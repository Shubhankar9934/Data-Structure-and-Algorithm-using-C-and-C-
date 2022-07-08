#include<bits/stdc++.h>
using namespace std;
void fun1(int n)
{
    if(n>0)
    {
        cout<<n<<(" ");
        fun1(n-1);
    }
}
void fun2(int n)
{
    while(n>0)//this is conversion of tell recursion into while loops;
    {
        cout<<n<<(" ");
        n--;
    }
}
void fun3(int n)
{
    for(int i=n;i>0;i--)//this is conversion of while loops into for loops;which implies conversion of tail recursion into for loops;
    {
        cout<<i<<(" ");
    }
}
int main()
{
    int x=5;
    cout<<("OUTPUT OF TAIL RECURSION:\n");
    fun1(x);
    cout<<("\nOUTPUT OF CONVERSION OF TAIL RECURSION INTO WHILE LOOPS:\n");
    fun2(x);
    cout<<("\nOUTPUT OF CONVERSION OF WHILE LOOP INTO FOR LOOPS:\n");
    fun3(x);
}
