#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    string S=("WeLComE");
    cout<<("Converting upper case to lower case and lower case to upper case")<<endl;
    for(i=0;S[i]!='\0';i++)
    {
        if(S[i]>=65&&S[i]<=90)
        {
            S[i]=S[i]+32;
        }
        else if(S[i]>=97&&S[i]<=122)
        {
            S[i]=S[i]-32;
        }
    }
    cout<<S;
}
