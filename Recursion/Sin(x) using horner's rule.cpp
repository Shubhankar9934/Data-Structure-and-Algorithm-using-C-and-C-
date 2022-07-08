#include<bits/stdc++.h>
using namespace std;
double sin(int x, int n)
{
    static double s=1;
    if(n==1){
        return s;
    }
    else
        {
          s=x*(1-(x*x*s)/((2*n-1)*(2*n-2)));
          return sin(x,n-1);
        }

}
int main()
{
    cout<<sin(1,10);
}
