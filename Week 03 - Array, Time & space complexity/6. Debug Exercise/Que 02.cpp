//  Que. Debug the code. Linear Search.

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// Before Debug
void linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return;
        }
    }
    return;
}

// After Debug

int linearSearch2(int arr[], int n ,int val){ // Change the type for return the value
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;  // return index if find
        }
    }
    return -1; // rerturn -1 if not found the vvalue
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
	cout<<linearSearch2(arr, n, val);
    return 0;
}