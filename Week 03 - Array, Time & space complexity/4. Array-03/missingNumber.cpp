#include<iostream>
#include<vector>

using namespace std;
#define ll long long
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + nums[i];
    }
    int tSum = (n* (1+n) / 2);
    return tSum - sum;
}

int main()
{
	int size;
	cin>>size;
	vector<int>arr(size);
	for(int i=0;i<size-1; i++){
		cin>>arr[i];
	}

  cout<< missingNumber(arr);

    return 0;
}