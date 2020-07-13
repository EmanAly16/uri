#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n>0)
    {
        list<int>ls;
        for(int i=1;i<=n;i++)
        {
            ls.push_back(i);
        }
        vector<int>disc;
        while(ls.size()>1)
        {
            disc.push_back(ls.front());
            ls.pop_front();
            ls.push_back(ls.front());
            ls.pop_front();
        }
        cout<<"Discarded cards: ";
        int ln=disc.size();
        for(int i=0;i<ln-1;i++)
        {
            cout<<disc[i]<<", ";
        }
        if(disc.size()>0)
          cout<<disc[disc.size()-1];
        cout<<endl;
        cout<<"Remaining card: "<<ls.front()<<endl;

    }
    return 0;
}
