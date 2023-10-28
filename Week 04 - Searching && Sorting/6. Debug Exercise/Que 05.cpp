// Debug the code. Find the length of the longest strictly increasing subsequence

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// Before Debug
int lengthOfLIS(vector<int>& nums) {
	vector<int> ans;
    ans.push_back(nums[0]);
    for(int i=0; i<nums.size(); i++)
    {
    	if(nums[i]<ans.back()){
            ans.push_back(nums[i]);
        }
        else{
            int index=lower_bound(ans.begin(), ans.end(), nums[i])-ans.begin(); // Before solving get acquainted with lower_bound()
            ans[index]=nums[i];
        }
    }    
    return ans.size();
}

// After Debug

int lengthOfLIS2(vector<int>& nums) {
    vector<int> ans;
    ans.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++){
        if(nums[i]>ans.back()){
            ans.push_back(nums[i]);
        }
        else{
            int index=lower_bound(ans.begin(), ans.end(), nums[i])-ans.begin();
            ans[index]=nums[i];
        }
    }    
    return ans.size();
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

    cout<<lengthOfLIS2(nums);
    return 0;
}