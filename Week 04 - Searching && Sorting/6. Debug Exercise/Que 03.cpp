// Debug the code. Find minimum in rotated sorted array. (Sorting was in ascending order).

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// Before Debug
int findMin(vector<int>& nums) {
    int start = 0, end = nums.size(), ans = start;
    while(nums[start] > nums[end]) {
        int mid = (start + end) << 1;
        if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
                end = mid;
        else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
            start = mid;          
	    else return nums[mid];
	        ans = start;
	    }
    return nums[ans];
}

// After Debug
int findMin2(vector<int>& nums) {
    int start = 0, end = nums.size() - 1, ans = start;
    while(nums[start] > nums[end]) {
        int mid = (start + end) >> 1;
        if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
            end = mid;
        else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
            start = mid + 1;          
        else return nums[mid];
            ans = start;
        }
    return nums[ans];
}
int main()
{
	vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    cout<<findMin2(nums);
    return 0;
}