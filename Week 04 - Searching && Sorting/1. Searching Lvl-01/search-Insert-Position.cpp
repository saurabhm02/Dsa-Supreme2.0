// 35. Search Insert Position
// https://leetcode.com/problems/search-insert-position/description/

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int searchInsert(vector<int>& nums, int target) {
    int start = 0;
    int end=nums.size();
    int mid;
    if(target > nums[end-1]){
        return end;
    }
    while(start<=end){
        mid = (start + end )/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else if( nums[mid] > target){
            end = mid - 1;
        }
    }
    return start;
}
int main()
{
	int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int target;
    cin >> target;
   
    cout<<searchInsert(nums, target);
    
    return 0;
}
