#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int linearSearch(vector<int>arr, int target){
	int n = arr.size();
	for(int i=0; i<n; i++){
		if(target == arr[i]){
			return i;
		}
	}
	return -1;
}
int main()
{

	int size;
	cin>>size;
	vector<int>arr(100);
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;

	cout<<linearSearch(arr, target);
	
    return 0;
}