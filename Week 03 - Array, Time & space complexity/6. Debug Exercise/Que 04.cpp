//  Que. Debug the code.


#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// bEfore Debug
void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
}

// After Debug
void swapAlternate2(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}
int main()
{
	int n;
	cin>>n;
	int  arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
    swapAlternate2(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}