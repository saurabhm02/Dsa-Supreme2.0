#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int getQuotient(int dividend, int divisor){
	int s = 0;
	int e = dividend;
	int ans = -1;
	while(s <= e){
		int mid = s + (e - s) / 2;
		if(mid * divisor == dividend){
			return mid;
		}
		else if(mid * divisor < dividend){
			ans = mid;
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	return ans;
}
int main()
{
	int dividend, divisor;
	cin>>dividend>>divisor;

	int Quotient = getQuotient(abs(dividend), abs(divisor));

	if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)){
		Quotient = 0 - Quotient;
	}
	cout<<Quotient<<endl;

	
    return 0;
}