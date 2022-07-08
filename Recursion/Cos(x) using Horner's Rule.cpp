 #include<bits/stdc++.h>
 using namespace std;
 double Cos(int x,int n)
 {
     static double s=1.5;
     if(n==1)
     {
         return s;
     }
     else
     {
         s=1-(x*x*s)/(2*n-2)*(2*n-3);
         return Cos(x,n-1);
     }
 }
int main()
{
    cout<<Cos(1,10);
}
