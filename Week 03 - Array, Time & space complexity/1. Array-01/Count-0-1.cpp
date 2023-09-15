#include<iostream>
using namespace std;
#define ll long long

void count01(int arr[], int size){
	int count0 = 0;
	int count1 = 0;
	for(int i=0; i<size; i++){
		if(arr[i] == 0){
			count0++;
		}
		if(arr[i] == 1){
			count1++;
		}
	}
	cout<<"Count 0: "<<count0<<endl;
	cout<<"Count 1: "<<count1<<endl;
}
int main()
{
	int size;
	cin>>size;
	int arr[100];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	count01(arr, size);
    return 0;
}