// https://leetcode.com/problems/valid-palindrome-ii/description/

#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool checkPalindrome(string s, int i, int j){
	while(i <= j){
		if(s[i] != s[j]){
			return false; // characters are not matching
		}
		else{
			i++;
            j--;
		}
	}
	return true; // it means that that we got the palindrome string
}

bool validPalindrome(string s) {
	int i = 0;
	int j = s.length()-1; 
	while(i < j){
		if(s[i] == s[j]){
			i++;
			j--;
		}
		else{
			// iadt means s[i] != s[j]
			// we can remove atmost 1 char to make a palindrome if possible
			// noaw wwe check the palindome after removal of char
			
			// we have 2 condition that which char want top remove from i or j

			// remove ith char
			bool ans1 = checkPalindrome(s, i+1, j);

			// remove jth char
			bool ans2 =  checkPalindrome(s, i, j-1);
            return ans1 || ans2;
		}
	}   

	// if we come after the loop it means we get the palindrome string
	// it means o removal  
	return true;  
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    string s;
	getline(cin, s);

	if (validPalindrome(s)) {
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}
    return 0;
}