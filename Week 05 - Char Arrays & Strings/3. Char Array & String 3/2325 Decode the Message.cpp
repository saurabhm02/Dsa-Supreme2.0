// https://leetcode.com/problems/decode-the-message/description/

#include<bits/stdc++.h>

using namespace std;
#define ll long long

string decodeMessage(string key, string message) {
    char initial ='a';
    char mapping[260] = {0};

    for(auto ch: key){
    	if(ch != ' ' && mapping[ch] == 0){
    		mapping[ch] = initial;
    		initial++;
    	}
    }

    string ans;
    for(auto ch: message){
    	if(ch == ' '){
    		ans.push_back(' ');
    	}

    	else{
    		ans.push_back(mapping[ch]);
    	}
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    string key;
    getline(cin, key);
    string message;
    getline(cin, message);
    

    string res = decodeMessage(key, message);
    cout<<res<<endl;

    return 0;
}