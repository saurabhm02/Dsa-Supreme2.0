// Que. Debug the code. Your task is to populate the array using the integer values in the range 1 to N (both inclusive) in the order - 1,3,5,.......,6,4,2.


#include<iostream>
#include<vector>

using namespace std;
#define ll long long


// before Debug
void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j] = i+2;
        arr[j] = i+1;
        j++;
    }
}

// after Debug
void arrange(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i = i + 2){
        arr[n-j-1] = i+2;
        arr[j] = i+1;
        j++;
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
    arrange(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}