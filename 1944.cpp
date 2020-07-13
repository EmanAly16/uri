#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,ans=0;
    cin>>t;
    string s;
    char ch;
    stack<string>st;
    st.push("FACE");
    while(t--)
    {
        s="";
        for(int i=0;i<4;i++)
        {
            cin>>ch;
            s+=ch;
        }
        string rs=s;
        reverse(rs.begin(),rs.end());
        if(rs==st.top())
        {
            ans++;
            st.pop();
            if(!st.size())
                st.push("FACE");
        }
        else
            st.push(s);

    }
    cout<<ans<<endl;
    return 0;
}
