// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

#include<bits/stdc++.h>

using namespace std;
#define ll long long

string removeDuplicates(string s){
	string ans ="";
	int i = 0;
	while(i < s.length()){
		if(ans.length() > 0 && ans[ans.length() - 1] == s[i]){
			ans.pop_back();
		}
		else{
			ans.push_back(s[i]);
		}
		i++;
	}
	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    string s;
    getline(cin, s);
    

    string res = removeDuplicates(s);
    cout<<res<<endl;
    return 0;
}