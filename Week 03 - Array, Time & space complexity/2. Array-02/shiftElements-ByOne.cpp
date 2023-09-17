#include<iostream>
#include<vector>
using namespace std;
#define ll long long


void shiftElements(int arr[], int size){
	int temp = arr[size -1];
	for(int i=size-1; i>=1; i--){
		arr[i] = arr[i-1];
	}
	arr[0] = temp;
}

int main()
{
	int size;
	cin>>size;
	int arr[100];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	
   shiftElements(arr, size);

	for(int i=0; i<size; i++) {
	   cout << arr[i] << " ";
	 }

    return 0;
}