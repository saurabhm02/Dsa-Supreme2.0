#include<bits/stdc++.h>

using namespace std;
#define ll long long

void createMap(string& str){
	char start = 'a';
	char mapping[280] = {0};

	// in this function each unique character in the string gets mapped to a distinct 
	// character starting from 'a'.

	for(auto ch: str){
    	if(mapping[ch] == 0){
        	mapping[ch] = start;
        	start++;
    	}
	}
        
	// the function iterates through the original string again and updates each with
	// character its corresponding mapped value. This modifies the original string 
	// in-place

	for(int i=0; i<str.length(); i++){
    	char ch = str[i];
    	str[i] = mapping[ch];
	}
}

vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    vector<string> ans;
    createMap(pattern);

    for(string s: words){
        string tempString = s;
        createMap(tempString);

        if(tempString == pattern){
            ans.push_back(s);
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

    int n;
    cin >> n;

    vector<string> words(n);
    for(int i = 0; i < n; i++) {
        cin >> words[i];
    }

    string pattern;
    cin >> pattern;

    vector<string> result = findAndReplacePattern(words, pattern);
    for(const string& word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}