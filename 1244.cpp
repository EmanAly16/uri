#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    string s ,str,word;
    getline(cin,s,'\n');
    n=stoi(s);
    vector<pair<string ,int>>mp;
    for(int i=0;i<n;i++)
    {
        c=0;
        getline(cin,str,'\n');
        stringstream st(str);
        priority_queue<int>sz;
       while(st>>word)
       {
         //  cout<<word<<" ";
           mp.push_back(make_pair(word,word.size()));
           sz.push(word.size());
       }
      int c=mp.size();
      while(!sz.empty()){
           int to=sz.top();
           sz.pop();
           while(sz.top()==to &!sz.empty())
            sz.pop();

           for(auto it:mp)
           {
               if(it.second==to && c>1){
               cout<<it.first<<" ";c--;
               }
               else if(c==1 &&it.second==to)
                cout<<it.first;
           }
      
      }
       cout<<endl;
       mp.clear();
    }
    return 0;
}
