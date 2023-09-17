#include<iostream>
using namespace std;
#define ll long long

void extremePrint(int arr[], int size){
	int left = 0;
	int right = size -1;;
	while(left<=right){
		 if(left == right){
		 	cout<<arr[left]<<endl;
		 }
		 else{
		 	cout<<arr[left]<<" ";
		 	cout<<arr[right]<<" ";
		 }
		 left++;
		 right--;
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
	extremePrint(arr, size);
	
    return 0;
}