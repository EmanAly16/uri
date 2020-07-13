#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string>mp;
     int t,n;
     string p;
     cin>>n;
     for(int i=0;i<n;i++)
       {
        char temp[2][100];
		for(int j=0; j<2; j++)
			scanf(" %[^\n]",temp[j]);
        mp.insert(pair<string, string>(temp[0],temp[1]));
       }
     cin>>t;
     for(int i=0;i<t;i++)
      {
         char temp[2][100];
		for(int j=0; j<2; j++)
			scanf(" %[^\n]",temp[j]);
        p=temp[1];
        cout<<temp[0]<<endl;cout<<mp[p]<<endl;
       cout<<endl;
      }

    return 0;
}
