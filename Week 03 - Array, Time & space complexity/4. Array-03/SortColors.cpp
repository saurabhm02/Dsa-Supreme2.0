#include<iostream>
#include<vector>

using namespace std;
#define ll long long

void sortColors(vector<int>&nums){
	int n = nums.size();
	int index = 0;
	int left = 0;
	int right = n-1;

	while(index <= right){
		if(nums[index] == 0){
			swap(nums[index] , nums[left]);
			left++;
			index++;
		}
		else if(nums[index]  == 2){
			swap(nums[index], nums[right]);
			right--;
			// catch -> no need to index++;
		}
		else{
			index++;
		}
	}
}
int main()
{
	int size;
	cin>>size;
	vector<int>arr(size);
	for(int i=0;i<size; i++){
		cin>>arr[i];
	}

   sortColors(arr);

   for(int i=0; i<size; i++){
   	cout<<arr[i]<<" ";
   }
    return 0;
}