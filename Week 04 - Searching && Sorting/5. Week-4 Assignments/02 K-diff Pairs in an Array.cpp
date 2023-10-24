// 532. K-diff Pairs in an Array
// https://leetcode.com/problems/k-diff-pairs-in-an-array/description/

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;
#define ll long long

int findPairs(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    // 2 Pointer Approach
    int i = 0;
    int j = 1;
    set<pair<int, int>> ans;
    while(j < nums.size()){
        if(nums[j] - nums[i] == k){
            ans.insert({nums[i], nums[j]});
            i++;
            j++;
        }
        else if(nums[j] - nums[i] > k){
            i++;
        }
        else{
            j++;
        }
        if(i == j){
            j++;
        }
    }
    return ans.size();
}



// Same Approach of 2-pointer but  without using set pair or extra spacee
int findPairs2(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        // 2 Pointer Approach
        int i = 0;
        int j = 1;
        int count = 0;
        // without using set pair or extra spacee
        while(j < nums.size()){

            if(i == 0 && nums[j] - nums[i] == k){
                count++;
                i++;
                j++;
            }
            else if(nums[j] - nums[i] == k && nums[i] != nums[i-1]){
                count ++; //for skip repeating elements
                i++;
                j++;
            }
            else if(nums[j] - nums[i] > k){
                i++;
            }
            else{
                j++;
            }
            if(i == j){
                j++;
            }
        }
        return count;
        // T.c : O(nlogn)
        // S.c = O(1)
}


// 2 Approach of Binay Search
int BSearch(vector<int>& nums, int s, int target){
    int e = nums.size() - 1;
    while(s <= e){
        int mid = s + (e - s) / 2;
        if(nums[mid] == target){
            return  mid;
        }
        else if (target > nums[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}
int findPairs3(vector<int>& nums, int k) {

        // Binary Search Approach
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    for(int i=0; i< nums.size(); i++){
        if(BSearch(nums, i+1, nums[i] + k) != -1){
            ans.insert({nums[i], nums[i] + k});
        }
    }    return ans.size();

    // T.c : O(nlogn)
    // S.c : O(1)
}




int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cin >> k;

    int result = findPairs(nums, k);
    cout<< result << endl;
    return 0;
}
 