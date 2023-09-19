#include<iostream>
#include<vector>

using namespace std;
#define ll long long

void shiftNegative(vector<int>&arr, int size){
	int i =0;

	for(int j=0; j<size; j++){
		if(arr[j] < 0){
			swap(arr[j], arr[i]);
			i++;
		}
	}
}
int main()
{
	int size;
	cin>>size;
	vector<int>arr(size);
	for(int i=0;i<size; i++){
		cin>>arr[i];
	}

   shiftNegative(arr, size);
   for(int i=0; i<size; i++){
   	cout<<arr[i]<<" ";
   }
    return 0;
}