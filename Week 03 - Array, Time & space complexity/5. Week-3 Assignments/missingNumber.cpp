#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// XOR approach
int XOR(vector<int>& nums){
  int ans = 0;
  for(int i=0; i<nums.size(); ++i){ // it will XOR all values of arr
    ans ^= nums[i];
  }

  int n = nums.size();
  for(int i=0; i<=n; ++i){  //XOR all range itesm [0, N]
    ans ^= i;
  }
  return ans;
} 

int missingNumber(vector<int>& nums) {
  return XOR(nums);   
}
   
    // T.c = O(n)
    // S.c = O(1);
int main()
{
	int n;
	cin>>n;

	vector<int>arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	cout<<missingNumber(arr);
    return 0;
}