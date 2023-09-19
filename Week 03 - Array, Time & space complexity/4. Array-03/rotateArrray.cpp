 #include<iostream>
#include<vector>

using namespace std;
#define ll long long

void ratateArray(vector<int>&nums, int k){
	int n = nums.size();
	vector<int> ans(n);
	for(int index=0; index<n; index++){
		// int newindex = (index + k)%n;
		// ans[newindex] = nums[index]; 
		ans[(index + k)%n] = nums[index]; 
	}
	nums = ans;
}
int main()
{
	int size;
	cin>>size;
	vector<int>arr(size);
	for(int i=0;i<size; i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	
   ratateArray(arr,k);

   for(int i=0; i<size; i++){
   	cout<<arr[i]<<" ";
   }
    return 0;
}