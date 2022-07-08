#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char A[]={"finding"};
    long int H[26]={0};
    for(i=0;A[i]!=0;i++)
    {
        H[A[i]-97]+=1;
    }
    cout<<("Dublicates alphabets are:")<<endl;
    for(i=0;i<26;i++)
    {
        if(H[i]>1)
        {

            cout<<char(i+97)<<(" ");
        }
    }
}
