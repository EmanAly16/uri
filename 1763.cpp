#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string ,string>mp;
    mp.insert(pair<string,string>("brasil"  ,"Feliz Natal!"));
    mp.insert(pair<string,string>("alemanha","Frohliche Weihnachten!"));
    mp.insert(pair<string,string>("austria","Frohe Weihnacht!"));
    mp.insert(pair<string,string>("coreia","Chuk Sung Tan!"));
    mp.insert(pair<string,string>("espanha","Feliz Navidad!"));
    mp.insert(pair<string,string>("grecia","Kala Christougena!"));
    mp.insert(pair<string,string>("estados-unidos","Merry Christmas!"));
    mp.insert(pair<string,string>("inglaterra","Merry Christmas!"));
    mp.insert(pair<string,string>("australia","Merry Christmas!"));
    mp.insert(pair<string,string>("portugal","Feliz Natal!"));
    mp.insert(pair<string,string>("suecia","God Jul!"));
    mp.insert(pair<string,string>("turquia","Mutlu Noeller"));
    mp.insert(pair<string,string>("argentina","Feliz Navidad!"));
    mp.insert(pair<string,string>("chile","Feliz Navidad!"));
    mp.insert(pair<string,string>("mexico","Feliz Navidad!"));
    mp.insert(pair<string,string>("antardida","Merry Christmas!"));
    mp.insert(pair<string,string>("canada","Merry Christmas!"));
    mp.insert(pair<string,string>("irlanda","Nollaig Shona Dhuit!"));
    mp.insert(pair<string,string>("belgica","Zalig Kerstfeest!"));
    mp.insert(pair<string,string>("italia","Buon Natale!"));
    mp.insert(pair<string,string>("libia","Buon Natale!"));
    mp.insert(pair<string,string>("siria","Milad Mubarak!"));
    mp.insert(pair<string,string>("marrocos","Milad Mubarak!"));
    mp.insert(pair<string,string>("japao","Merii Kurisumasu!"));
    string s;
    while(getline(cin, s))
	{
		if (mp[s].empty()) cout << "--- NOT FOUND ---"<<endl;
		else cout << mp[s] << endl;
	}
    return 0;
}
