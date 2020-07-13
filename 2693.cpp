#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool mysort(const tuple<int, char, string>& a,
               const tuple<int, char, string>& b)
{
    if(get<0>(a) == get<0>(b))
      {
        if(get<1>(a) == get<1>(b))
            return (get<2>(a) < get<2>(b));
        else
            return (get<1>(a) < get<1>(b));

      }
    return (get<0>(a) < get<0>(b));

}
int main()
{
    int n,a;
    char b;
    string c;
     while(cin>>n)
    {
       // if(n==EOF) break;
        vector<tuple<int, char, string>> v;
        for(int i=0;i<n;i++)
        {
            cin>>c>>b>>a;
           v.push_back(make_tuple(a,b,c));
        }
         sort(v.begin(), v.end(), mysort);
         for (int i = 0; i < v.size(); i++)
            cout << get<2>(v[i]) <<endl ;
    }

    return 0;
}
