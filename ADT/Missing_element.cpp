#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[8]={1,3,7,6,8,-1,-10,15};
    int H[15]={0};
    for(int i=0;i<8;i++)
    {
        H[A[i]]++;
    }
    for(int i=1;i<=15;i++)
    {
        if(H[i]==0)
        {
             cout<<"First positive missing  element is:"<<i;
             return 0;
        }
    }
}
