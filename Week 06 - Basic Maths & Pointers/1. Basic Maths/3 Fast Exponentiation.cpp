#include<bits/stdc++.h>

using namespace std;
#define ll long long

int slowExponentiation(int a, int b){
	int ans = 1;
	for(int i=0; i<b; i++){
		ans *= a;
	}
	return ans;
}

// T.c : O(b)

long long int fastExponentiation(long long int x,long long int n,long long int M){
	long long ans = 1;
	while(n > 0){
		   if(n & 1){
		            ans = (ans * x) % M;
		        }
		   x = (x * x) % M;
		   n >>= 1; //b=b/2
	}
	return ans % 
}

// T.c : O(logb)


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int a, b;
    cin>>a>>b;

    cout<<"slow exponentiation of "<<a<<" power "<<b<<" is "<<slowExponentiation(a, b)<<endl;
    return 0;
}
