#include<iostream>
#include<limits.h>
using namespace std;
#define ll long long


// For finding Minimum No : Always use INT_MAX

// for finding Maximum No : Always use INT_MIN

void minNum(int arr[], int size){
	int minimum = INT_MAX;
	for(int i=0; i<size; i++){
		if(arr[i] < minimum){
			minimum = arr[i];
		}
	}
	cout<<"Minimum No: "<<minimum<<endl;

}

void maxNum(int arr[], int size){
	int maximum = INT_MIN;
	for(int i=0; i<size; i++){
		if(arr[i] > maximum){
			maximum = arr[i];
		}
	}
	cout<<"Maximum No: "<<maximum;

}
int main()
{
	int size;
	cin>>size;
	int arr[100];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	minNum(arr, size);
	maxNum(arr, size);
    return 0;
}