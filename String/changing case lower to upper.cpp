 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int i=0;
     string S="WELCOME";
     cout<<("Converting this upper case to lower case:")<<endl;
     for(i=0;S[i]!='\0';i++)
     {
         S[i]=S[i]+32;
     }
     cout<<S<<endl;

     cout<<("Converting this lower case to upper case:")<<endl;

     for(i=0;S[i]!='\0';i++)
     {
         S[i]=S[i]-32;
     }
     cout<<S;

 }
