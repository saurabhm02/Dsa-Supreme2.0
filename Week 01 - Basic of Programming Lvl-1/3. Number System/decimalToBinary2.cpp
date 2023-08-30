
#include<iostream>
#include<cmath>
using namespace std;

// By using BitWise Method
int decimalToBinary(int n){
	int binaryNo =0;
	int i = 0;
	while(n>0){
		int bit = (n & 1);
		binaryNo = bit*pow(10, i++) + binaryNo;
		n = n>>1;
	}
	return binaryNo;
}

int main()
{
    int n;
    cin>>n;
    int binary = decimalToBinary(n);
    cout<<binary;	
    return 0;
}