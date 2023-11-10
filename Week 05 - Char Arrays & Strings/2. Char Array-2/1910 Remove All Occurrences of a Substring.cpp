// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/

#include<bits/stdc++.h>

using namespace std;
#define ll long long

string removeAllOcc(string s, string part){
	while(s.find(part) != string::npos){
		s.erase(s.find(part), part.length());
	}
	return s;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    string s;
    getline(cin, s);
    string part;
    getline(cin, part);
    

    string res = removeAllOcc(s, part);
    cout<<res<<endl;

    return 0;
}