// Debug the code.

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// Before Debug
int binarySearch(vector<int>& nums, int target) {
    int left = 0, right = int(nums.size());
        
    while (left < right) {
        int mid = left + (right - left) / 2;
	    if (nums[mid] <= target) {
	        left = mid;
	    }
	    else {
	        right = mid;
	    }
    }
        
    if (left >= 0 and nums[left] == target) {
        return left;
    }
    else {
        return -1;
    }
}


// After Debug
int binarySearch2(vector<int>& nums, int target) {
    int left = 0, right = int(nums.size());
        
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= target) {
            left = mid + 1;
        }
        else {
                right = mid;
        }
    }
        
    if (left > 0 and nums[left - 1] == target) {
        return left - 1;
    }
    else {
        return -1;
    }
}
int main()
{
	int n;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int target;
    cin >> target;

    cout<<binarySearch2(nums, target);
    return 0;
}