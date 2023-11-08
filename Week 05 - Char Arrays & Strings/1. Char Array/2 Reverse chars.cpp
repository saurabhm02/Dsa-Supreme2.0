#include<bits/stdc++.h>

using namespace std;
#define ll long long


void reverseString(char ch[], int n){
	int i=0;
	int j = n - 1;
	while(i<=j){
		swap(ch[i], ch[j]);
		i++;
		j--;
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
	reverseString(ch, 7);
	cout<<ch<<endl;

    return 0;
}