// Que. Debug the code. List all pairs in array that sums to X.

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

//Before Debug

int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}

// After Debug

int pairSumToX2(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){ // just run the loop from j = i + 1
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
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
	cout<<pairSumToX2(arr, n, val);
    return 0;
}