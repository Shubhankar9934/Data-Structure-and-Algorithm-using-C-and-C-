#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,cwords=0;
    char S[]="How are you";
    cout<<("Number of words:");
    for(i=0;S[i]!='\0';i++)
    {
        if(S[i]==' '&&S[i-1]!=' ')
        {
            cwords++;
        }
    }
    cout<<cwords+1;
}
