#include<iostream>
#include<vector>
using namespace std;
#define ll long long


// void sortZeroOne(int arr[], int n) {
//   int zeroCount = 0;
//   int oneCount = 0;
//   //stepA: Count 0 and 1
//   for(int i=0; i<n; i++) {
//     if(arr[i] == 0) 
//       zeroCount++;
//     if(arr[i] ==1) 
//       oneCount++; 
//   }

//   //Step B: place all zeroes first
//   // int i;
//   // for(i =0; i<zeroCount; i++) {
//   //  arr[i] = 0;
//   // }
//   // //Step B: place all ones first
//   // for(int j = i; j<n ;j++) {
//   //  arr[j] = 1;
//   // }

//   //EASY WAY
//   int index = 0;

//   while(zeroCount--) {
//     arr[index] = 0;
//     index++;
//   }

//   while(oneCount--) {
//     arr[index] = 1;
//     index++;
//   }
  
// }


void sortZeroOne2 (vector<int>&arr, int size){
	int start = 0;
	int end = arr.size()-1;
	int i=0;

	while(i <= end){
		if(arr[i] == 0){
			swap(arr[start], arr[i]);
			i++;
			start++;
		}
		else{
			swap(arr[i], arr[end]);
			end--;
		}
	}
}


int main()
{
	int size;
	cin>>size;
	int num;
	vector<int>arr;

	for(int i=0; i<size; i++) {
	   cin>>num;
	   arr.push_back(num);
	}

	sortZeroOne2(arr, size);
	for(auto value: arr){
		cout<<value<<" ";
	}



    return 0;
}