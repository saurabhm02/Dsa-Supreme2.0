//  Que. Debug the code. List all triplets in array that sums to X.

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// Before Debug

int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){
			for(int k=j; k<size; k++){
				if(input[i] + input[j] + input[k] == x) triplets++;
			}
		}
	}
	return triplets;
}

// After Debug

int tripletSumToX2(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){ // run looop from i + 1
			for(int k=j+1; k<size; k++){ // run loop from j + 1
				if(input[i] + input[j] + input[k] == x) {
					triplets++;
				}
			}
		}
	}
	return triplets;
}

int main()
{
	int n;
	cin>>n;
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int val;
	cin>>val;
	cout<<tripletSumToX2(arr, n, val);
    return 0;
}