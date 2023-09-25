#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int findMiddleIndex(vector<int>& nums) {
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
int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int result = findMiddleIndex(nums);
    
    if (result != -1) {
        cout << "The middle index is: " << result << endl;
    } else {
        cout << "There is no middle index." << endl;
    }
    return 0;
}