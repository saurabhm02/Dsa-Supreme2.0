// https://practice.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

#include<bits/stdc++.h>

using namespace std;
#define ll long long

int gcd(int A, int B) { 
	if(A == 0){
	    return B;
	}
	if(B == 0){
	    return A;
	}
	    
	while(A > 0 & B > 0){
	    if(A > B){
	        A = A - B;
	    }
	    else{
	        B = B - A;
	    }
	}
	      
	return A == 0 ? B : A;
} 

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int a, b;
    cin>>a>>b;

    int res = gcd(a, b);
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<res<<endl;

    return 0;
}