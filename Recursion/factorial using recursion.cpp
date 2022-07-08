#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n>0){return n*fact(n-1);}
    else {return 1;}

}
int main()
{
    int x;
    cout<<("Enter a number:")<<endl;
    cin>>x;
    cout<<("Factorial of entered number is ")<<fact(x);
}
