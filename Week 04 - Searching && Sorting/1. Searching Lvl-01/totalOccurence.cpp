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

int lastOccurence(vector<int>arr, int size, int target){
	int start = 0;
	int end = size-1;
	int mid = start + (end - start) / 2;
	int ans = -1;	 
    while(start <= end){
    	

    	if(arr[mid] == target){
			ans = mid;
			start = mid + 1;
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

int totalOccurence(vector<int>arr, int size, int target){
	int firstOcc = firstOccurence(arr, size, target);
	int lastOcc = lastOccurence(arr, size, target);
	
	if (firstOcc != -1 && lastOcc != -1) {
        int totalOcc = lastOcc - firstOcc + 1;
        return totalOcc;
    }

    return 0; 
	return totalOcc;
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

	cout<<totalOccurence(arr, size, target);
	
    return 0;
}