#include<bits/stdc++.h>

using namespace std;
#define ll long long

int findLength(char ch[], int size){
    int len = 0;
    while(ch[len] != '\0'){
        len++;
    }
    return len;
}
bool checkPalindrome(char ch[], int n){
	int i=0;
	int j = n- 1;
	while(i <= j){
		if(ch[i] == ch[j]){
			i++;
			j--;
		}
		else{
			return false; // characters are not matching
		}
	}
	return true; // it means that that we got the palindrome string
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    char ch[100];
	cin.getline(ch, 100);

    int len = findLength(ch, 100);
	cout<<ch<<endl;
	if(checkPalindrome(ch, len)){
		cout<<"yes!, it is a palindrome string"<<endl;
	}
	else{
		cout<<"Noo!, it is not a palindrome string"<<endl;
	}

    return 0;
}