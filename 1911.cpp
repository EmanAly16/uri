#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    map<string ,string >mp;
    string s,d;
    while(cin>>n &&n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>s>>d;
            mp.insert(pair<string,string>(s,d));
        }
        cin>>m;
        string s1;
        int c=0,cnt;
        for(int i=0;i<m;i++){
                 cnt=0;
                cin>>s>>d;
                s1=mp[s];
              //  cout<<s1<<" "<<d<<endl;
               for(int j=0;j<d.size();j++)
               {
                   if(d[j]!= s1[j])
                    cnt++;
                    //cout<<j<<" "<<cnt<<endl;
                    if(cnt>1){c++;break;}
               }
         }
          cout<<c<<endl;
    }
        return 0;
}
