#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    map<string ,int>mp;
    vector<string>v;
    while(cin>>a>>b)
    {
        v.push_back(b);
         if(mp.find(a)!=mp.end())
                mp[a]++;
         else
          mp.insert(pair<string, int>(a,1));
    }
    for(int i=0;i<v.size();i++)
    {
        if(mp.find(v[i])!=mp.end())
            mp[v[i]]=0;
    }
    cout<<"HALL OF MURDERERS"<<endl;
     for(auto it=mp.begin();it!=mp.end();it++)
     {
         if (it->second>0)
            cout<<it->first<<" " <<it->second<<endl;
     }

    return 0;
}
