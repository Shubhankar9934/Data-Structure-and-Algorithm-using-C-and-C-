#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[]={"decimal"};
    char B[]={"medicak"};

    int  i,H[26]={0};
    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]+=1;
    }
    for(i=0;B[i]!='\0';i++)
    {
        H[B[i]-97]-=1;
        if((H[B[i]-97])<0)
        {
            cout<<("Not an Anagram");
            return 0;
        }
    }
    cout<<("An Anagram");



    /*if(H[(A[i]-97)]=='\0')
    {
        cout<<"An Anagram ";
    }*/
}
