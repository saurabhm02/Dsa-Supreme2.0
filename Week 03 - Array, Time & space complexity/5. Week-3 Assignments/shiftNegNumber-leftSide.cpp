#include<iostream>
#include<vector>

using namespace std;
#define ll long long

void swapMethod(vector<int>&arr, int size){
	int i =0;

	for(int j=0; j<size; j++){
		if(arr[j] < 0){
			swap(arr[j], arr[i]);
			i++;
		}
	}
	// T.c = O(nlogn)
	// S.c = O(n)
}

void dutchNationalFlag(vector<int>& arr, int size) {
	// 3- pointer Approach
    int l = 0, r = size - 1;
    int i = 0; 

    while (i <= r) {
        if (arr[i] < 0) {
            swap(arr[i], arr[l]);
            l++;
            i++; 
        }
        else if (arr[i] > 0) {
            swap(arr[i], arr[r]);
            r--;
        }
        else {
            i++;
        }
    }
    // T.c = O(n)
    // S.c = O(1)
}

 
int main()
{
	int size;
	cin>>size;
	vector<int>arr(size);
	for(int i=0;i<size; i++){
		cin>>arr[i];
	}

   dutchNationalFlag(arr, size);
   for(int i=0; i<size; i++){
   	cout<<arr[i]<<" ";
   }
    return 0;
}