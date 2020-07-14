#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   // ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,m;
    cin>>n;
    while(n--)
    {
        scanf("%d",&m);
        vector<int> v(m);
        for(int i = 0; i<m; i++)
            scanf("%d",&v[i]);
        sort(v.begin(),v.end());

        for(int i = 0; i<m-1; i++)
            printf("%d ",v[i]);

        printf("%d",v[m-1]);
        printf("\n");

    }
    return 0;
}
