#include<bits/stdc++.h>

using namespace std;
#define ll long long

void convertToUpperCase(char ch[], int n){
	  int i = 0;

	  while(ch[i] != '\0'){

	  	if(ch[i] >= 'a' && ch[i] <= 'z'){
	  		ch[i] = ch[i] - 'a' + 'A';
	  	}
	  	i++;
	  }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    char ch[100];
	cin.getline(ch, 100);

	cout<<ch<<endl;
	convertToUpperCase(ch, 100);
	cout<<ch<<endl;
    return 0;
}