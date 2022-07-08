#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[]={"Painter"};
    char B[]={"Paintin"};
    int i=0,j=0;
    for(i=0,j=0;A[i]!='\0',B[j]!='\0';i++,j++)
    {

        if(B[j]!=A[i]){break;}
    }
        if(i==j){cout<<("Equal string");}
        else if(i<j){cout<<("Not equal");}

}
