#include<bits/stdc++.h>
using namespace std;
bool Validating_string(char *name)
{
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(!(name[i]>=65&&name[i]<=90)||!(name[i]>=97&&name[i]<=122)||!(name[i]>=48&&name[i]<=57))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char *name[]={"Nikita123"};
    if(Validating_string(*name))
    {
        cout<<("Valid String.");
    }
    else
    {
        cout<<("Not Valid String");
    }
    return 0;
}
