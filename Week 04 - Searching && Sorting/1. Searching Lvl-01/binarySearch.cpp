#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int binarySearch(vector<int>arr, int size, int target){
	int start = 0;
	int end = size-1;
	
    while(start <= end){
    	int mid = start + (end - start) / 2;

    	if(arr[mid] == target){
			return mid;
		} 
		else if(target < arr[mid]){
			end = mid - 1;
		}
		else if(target > arr[mid]){
			start = mid + 1;
		}ḥ
    }
	return -1;
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

	cout<<binarySearch(arr, size, target);
	
    return 0;
}