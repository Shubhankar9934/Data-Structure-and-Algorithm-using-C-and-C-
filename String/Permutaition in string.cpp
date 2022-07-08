#include<bits/stdc++.h>
using namespace std;
void Permutation(string S,int low, int high)
{
    if(low == high)
    {
        cout<<S<<endl;
    }
    else
    {
        int i;
        for(i=1;i<=high;i++)
        {
            swap(S[low],S[i]);
            Permutation(S,low+1,high);
            swap(S[low],S[i]);
        }
    }
}
int main()
{
    string S="ABC";
    int n = S.size();
    Permutation(S,0,n-1);
    return 0;
}
