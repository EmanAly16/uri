#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   map<string ,double>mp;
   int t,n,a,m;
   string s;
   double p,res;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       res=0.0;
       cin>>n;
     for(int i=0;i<n;i++)
       {
        cin>>s>>p;
       mp.insert(pair<string, double>(s,p));
       }
       cin>>m;
       for(int i=0;i<m;i++)
       {
           cin>>s>>a;
           res+=(mp[s]*a);
       }

       cout<<"R$ "<<fixed<<setprecision(2)<<res<<endl;
      mp.clear();

   }


    return 0;
}
