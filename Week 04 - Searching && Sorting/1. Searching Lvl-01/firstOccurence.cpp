#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int firstOccurence(vector<int>arr, int size, int target){
	int start = 0;
	int end = size-1;
	int mid = start + (end - start) / 2;
	int ans = -1;	 
    while(start <= end){
    	

    	if(arr[mid] == target){
			ans = mid;
			end = mid -1;
		} 
		else if(target < arr[mid]){
			end = mid - 1;
		}
		else if(target > arr[mid]){
			start = mid + 1;
		}

		mid = start + (end - start) / 2;
    }
	return ans;
}
int main()
{

	int size;
	cin>>size;
	vector<int>arr(size);
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;

	cout<<firstOccurence(arr, size, target);
	
    return 0;
}