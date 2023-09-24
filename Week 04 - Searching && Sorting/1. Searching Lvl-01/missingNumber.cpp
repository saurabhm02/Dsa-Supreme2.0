#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int missingNumber(vector<int>arr, int size){
int start = 0;
int end = size-1;
int ans = -1;
int mid = start + (end - start) / 2;

	while(start <= end){
		int diff = arr[mid] - mid;

		if(diff == 1){
			start = mid+1;
		}
		else{
			ans = mid;
			end = mid-1;
		}
		mid = start + (end - start) / 2;
	}	
	if(ans + 1 == 0){
		return size + 1;
	}
	return ans+1;
}
int main()
{

	int size;
	cin>>size;
	vector<int>arr(size);
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}   

	cout<<missingNumber(arr, size);
	
    return 0;
}