#include<bits/stdc++.h>

using namespace std;
#define ll long long

// Funtion Overloading
class Math{
public:
	int sum(int a, int b){
		return a + b;
	}

	int sum(int a, int b, int c){
		return a + b + c;
	}

	// sum func is existing in multiple forms,
	// so we can say that polymorphims is happening 
	int sum (int a, float b){
		return a + b;
	}
};


// Operator Overloading

class Param{
public:
	int val;

	void operator+(Param& val2){
		int value1 = this->val;
		int value2 = val2.val;
		cout<<(value2 - value1)<<endl;
	}
};

int main(){ 
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	// Addition a;
	// cout<<a.sum(2, 6.9f)<<endl;
	// cout<<a.sum(2, 2)<<endl;
	// cout<<a.sum(1, 2, 3)<<endl;

	Param a, b;
	a.val = 4;
	b.val = 8;
	a + b; 

    return 0;
}