// Debug the code. Search in sorted rotated array. (Sorting was less to high).

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// Before Debug
int search(vector<int>& nums, int target) {
	int l = 0, r = nums.size() - 1;
	while(l <= r){
		int mid = l + (r-l)/2;
		if(nums[mid] == target){
			return mid;
		} 
		else if(nums[l]>=nums[mid]){
			if(nums[l]<=target && target<nums[mid]) {
				r = mid-1;
			}
			else {
				l = mid+1;
			}
		}
		else{
			if(nums[mid]<target && target<=nums[r]) {
				l = mid+1;
			}
			else {
				r = mid-1;
			}
		}
	}
	return -1; // No need to debug this line.
}


// After Debug
int search2(vector<int>& nums, int target) {
	int l = 0, r = nums.size() - 1;
	while(l <= r){
		int mid = l + (r-l)/2;
		if(nums[mid] == target){
			return mid;
		} 
		else if(nums[l]<=nums[mid]){
			if(nums[l]<=target && target<nums[mid]) {
				r = mid-1;
			}
			else {
				l = mid+1;
			}
		}
		else{
			if(nums[mid]<target && target<=nums[r]) {
				l = mid+1;
			}
			else {
				r = mid-1;
			}
		}
	}
	return -1; // No need to debug this line.
}
int main()
{
	vector<int> nums;
    int n, target;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cin >> target;

    cout<<search2(nums, target);
    return 0;
}