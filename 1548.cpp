#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        priority_queue<int>st;
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            st.push(a[i]);
        }
        int c=0;
        for(int i=0;i<m;i++)
        {
            if(a[i]==st.top())
                c++;
            st.pop();
        }
        cout<<c<<endl;
    }

    return 0;
}
