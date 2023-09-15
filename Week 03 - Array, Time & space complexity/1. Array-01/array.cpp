#include<iostream>
using namespace std;
#define ll long long


void sum(int arr[], int size){
    int sum = 0;
	for(int i=0;i<size;i++){
		sum = sum + arr[i];
	}

	cout<<sum;
}

void multiply(int arr[], int size){
	int mult = 1;
	for(int i=0;i<size;i++){
		mult = mult * arr[i];
	}

	cout<<mult;
}

void doubleArr(int arr[], int size){
	for(int i=0;i<size;i++){
		arr[i] = 2 * arr[i];
	}

	for(int i=0;i<size;i++){
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
	doubleArr(arr, size);
	
	

    return 0;
}