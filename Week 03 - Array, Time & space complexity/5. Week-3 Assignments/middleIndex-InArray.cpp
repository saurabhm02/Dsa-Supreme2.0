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
   int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = findMiddleIndex(nums);

    if (result != -1) {
        cout <<result << endl;
    } else {
        cout<<-1<<endl;
    }

    return 0;
}