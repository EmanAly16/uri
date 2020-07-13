#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}
void sort(map<string, int>& M)
{

    vector<pair<string, int> > A;
   
    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);
    for (auto& it : A) {
         if(it==A[A.size()-1])break;
        cout << it.first <<" ";
           //  << it.second << endl;
    }
     auto& it= A[A.size()-1];
        cout<<it.first<<endl;
}
int main()
{
    int n,m,d;
    string s;
    while(cin>>n)
    {
        if(n==EOF) break;
        map<string ,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>s>>d;
            mp.insert(pair<string,int>(s,d));
        }
        sort(mp);

    }

        return 0;
}
