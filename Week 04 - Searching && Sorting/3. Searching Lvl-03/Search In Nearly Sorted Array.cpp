#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// Function to search for a target element in a nearly sorted array.
// A nearly sorted array is an array where an element at index i can be at index (i-1), i, or (i+1).
// This function returns the index of the target element if found, or -1 if not found.

int SearchNearlySorted(int arr[], int size, int target){
	int s = 0;
	int e = size-1;
	while(s <= e){
		int mid = s + (e - s)/2;
		if(mid-1 >= 0 && arr[mid-1] == target){
			// Check if the element to the left of the middle (mid - 1) is equal to the target.
            // If yes, return the index of the element to the left.
			return mid - 1;
		}
		if(arr[mid] == target){
			return mid;
		}
		if(mid + 1 <= e && arr[mid+1] == target){
			// Check if the element to the right of the middle (mid + 1) is equal to the target.
            // If yes, return the index of the element to the right.
			return mid + 1;
		}

		if(target > arr[mid]){
			// If the target is larger than the middle element,
            // it means the target should be on the right side of the middle.
            // Adjust the search range to the right half.
			s = mid + 2;
		}
		else{
			// If the target is smaller than the middle element,
            // it means the target should be on the left side of the middle.
            // Adjust the search range to the left half.
			e = mid - 2;
		}
	}
	return -1;

}
int main()
{
	int size;
	cin>>size;

	int arr[100];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	cout<<SearchNearlySorted(arr, size, target);
    return 0;
}