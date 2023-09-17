#include<iostream>
using namespace std;
#define ll long long


void reverse(int arr[], int size){
	// here we just use while loop

	int left = 0;
	int right = size-1;
	
	while(left <= right){
		swap(arr[left], arr[right]);
		left++;
		right--;
	}

	// by using for loopṇ
    // for(int left=0, right = size-1; left<=right; left++, right--){
    // 	swap(arr[left], arr[right]);
    // }

	for(int  i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}


int main()
{
	int size;
	cin>>size;
	int arr[100];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	reverse(arr, size);
	
    return 0;
}