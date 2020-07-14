#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

        string s;
        while(cin>>s)
        {
           int f=0,len=0,i=0,cnt=0;
            while(true)
            {
                if(s[i] == NULL)
                    break;
                if(s[i] == '(')
                    f++,cnt++;
                if(s[i] == ')'){
                    if(f > 0){
                            len++;
                            f--;
                   }
                   cnt++;
                }
                i++;
             }
            if(len*2==cnt)
            cout<<"correct"<<endl;
            else
            cout<<"incorrect"<<endl;
        }
    return 0;
}
