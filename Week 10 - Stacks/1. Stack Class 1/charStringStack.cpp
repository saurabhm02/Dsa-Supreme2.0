#include<iostream>
#include <stack>

using namespace std;
#define ll long long


int main(){ 
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 
	    string str = "saurabh";
	    stack<char> st;
	    for(int i=0; i<str.length(); i++){
	    	char ch = str[i];
	    	st.push(ch);
	    }
	    cout<<endl;

		while(!st.empty()){
			cout<<st.top()<<" ";
			st.pop();
		}
		cout<<endl;

    return 0;
}