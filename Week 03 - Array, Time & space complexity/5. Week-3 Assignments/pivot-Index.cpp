// https://leetcode.com/problems/find-pivot-index/
// 724. Find Pivot Index


#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int bruteForce(vector<int>& nums){
        for(int i=0; i<nums.size(); i++){
            int leftSum = 0;
            int rightSum = 0;

            for(int j=0; j<i; j++){
                leftSum += nums[j];
            }
            for(int j=i+1; j<nums.size(); j++){
                rightSum += nums[j];
            }
            if(leftSum == rightSum){
                return i;
            }
        }
        return -1;
    }

    int PrefixSumApproach(vector<int>& nums){
        vector<int>lSum(nums.size(), 0);
        vector<int>rSum(nums.size(), 0);

        for(int i=1; i<nums.size(); i++){
            lSum[i] = lSum[i-1] + nums[i-1];
        }

         for(int i=nums.size() - 2; i>=0; i--){
            rSum[i] = rSum[i+1] + nums[i+1];
        }

        for(int i=0; i< nums.size(); i++){
            if(lSum[i] == rSum[i]){
                return i;
            }
        }
        return -1;
    }
    int pivotIndex(vector<int>& nums) {
        // return bruteForce(nums);
        return PrefixSumApproach(nums);
    }
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << pivotIndex(arr);
    return 0;
}