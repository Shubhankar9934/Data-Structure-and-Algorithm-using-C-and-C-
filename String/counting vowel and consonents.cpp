#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,cvowels=0,cconso=0;
    char S[]="How are you";

    for(i=0;S[i]!='\0';i++)
    {
        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'||S[i]=='A'||S[i]=='E'||S[i]=='I'||S[i]=='O'||S[i]=='U')
        {
            cvowels++;
        }
        else if(S[i]>=65&&S[i]<=90||S[i]>=97&&S[i]<=122)
        {
            cconso++;
        }
    }
    cout<<("Number of vowels = ")<<cvowels<<("\nNumber of Consonents = ")<<cconso;
}
