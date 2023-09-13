
// Que. Debug the code. Take input a character, print 1, 
// if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.
// here the ans 


#include<iostream>
using namespace std;
#define ll long long

int main()
{
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){
        cout<<0;
    }
	else if('A'<=c && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
    return 0;
}
