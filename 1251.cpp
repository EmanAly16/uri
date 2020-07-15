#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int>& a,
         pair<char, int>& b)
{
    if(a.second == b.second)
            return a.first > b.first;
    return a.second < b.second;
}
void sort(map<char, int>& M)
{

    vector<pair<char, int> > A;

    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

    for (auto& it : A) {
        cout << 0+it.first << " "
             << it.second << endl;
    }
}
int main(){
    string a;
    map<char,int>mp;
    int t = 0;
    while(getline(cin,a,'\n'))
    {
        if(t>0)  cout<<endl;
        for(int i=0;i<a.size();i++)
            mp[a[i]]++;
        sort(mp);
        mp.clear();
        t++;

    }

    return 0;
}
