#include<bits/stdc++.h>

using namespace std;
#define ll long long

	void print(int n){
		if(n == 1){  // base case
			cout<<1<<" ";
			return;
		}
		cout<<n<<" "; // processing part
		print(n-1); // recursive call
	}

	int pow(int n){

		if(n == 0){
			return 1;
		}
		int ans = 2 * pow(n-1);
		return ans;
	}

	int sum(int n){

		if(n == 1){
			return 1;
		}
		return n + sum(n-1);
	}

	int fib(int n){

		if(n == 0){
			return 0;
		}
		if(n == 1){
			return 1;
		}
		int ans = fib(n-1) + fib(n - 2);
		return ans;
	}

	int factorial(int n){
                                                     
		if(n == 0){
			return 0;
		}
		if(n == 1){
			return 1;
		
		return n * factorial(n -1);
	}


int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n;
    cin>>n;
 print(n);
    cout<<sum(n)<<endl;
    cout<<pow(n)<<endl;
    cout<<factorial(n)<<endl;

    return 0;
}