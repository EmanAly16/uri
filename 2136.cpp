#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string, int> mp;
    set<string>yes;
    set<string>no;
    string res = "";
    int mx = 0;
    string s,f;
    while(cin >> s && s!="FIM"){
        cin >> f;

        if(f == "YES" && !mp.count(s)){
            yes.insert(s);
            mp[s] = 1;

            int x = s.size();
            if(x > mx){
                res = s;
                mx = x;
            }
        }
        else if(!mp.count(s)){
            mp[s] = 1;
            no.insert(s);
        }
    }
    for(auto it:yes)
    {
        cout<<it<<endl;
    }
    for(auto it:no)
    {
        cout<<it<<endl;
    }

    cout << endl;
    cout << "Amigo do Habay:" << endl << res << endl;
}
