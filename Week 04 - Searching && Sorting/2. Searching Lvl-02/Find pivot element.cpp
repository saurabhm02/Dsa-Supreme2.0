#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int pivotElement(vector<int> &arr){
	int s = 0;
	int e = arr.size() - 1;

	while(s <= e){
		int mid = s + (e - s) / 2;
		if(mid + 1 < arr.size() && arr[mid] > arr[mid + 1]){
			return mid;
		}
		if(mid - 1 >=0 && arr[mid - 1] > arr[mid]){
			return mid - 1;
		}
		if(arr[s] >= arr[mid]){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return -1;
}
int main()
{
	int size;
	cin>>size;

	vector<int>arr(size);
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	cout<<pivotElement(arr);
    return 0;
}