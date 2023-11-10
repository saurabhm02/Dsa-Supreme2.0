// https://leetcode.com/problems/palindromic-substrings/description/

#include<bits/stdc++.h>

using namespace std;
#define ll long long

int expand(string s, int i, int j){
    int count = 0;
    while(i>= 0 && j<s.length() && s[i] == s[j]){
        count++;
        i--;
        j++;
    }
    return count;

    // Time Complexity = O(n)
    // Space Complexity = O(1)
}

int countSubstrings(string s) {
    int tCount = 0;
    for(int i=0; i<s.length(); i++){  // O(n)

        int oddRotation = expand(s, i, i);  // O(n)
        int evenRotation = expand(s, i, i+1);  //O(n)

        tCount = tCount +  oddRotation + evenRotation;
    } 
    return tCount;  
    // Time Complexity = O(n2)
    // Space Complexity = O(n)   
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    string s;
	getline(cin, s);

	cout<<countSubstrings(s);

    return 0;
}