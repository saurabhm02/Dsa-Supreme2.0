#include<iostream>
#include<vector>
using namespace std;
#define ll long long


void pairSum(vector<int>arr, int sum){
	for(int i=0; i<arr.size(); i++){
		int element = arr[i];

		for(int j=i+1; j<arr.size(); j++){
			if(element + arr[j] == sum){
				cout<<"("<<element<<", "<<arr[j]<<")"<<endl;
			}
		}
	}
}
int main()
{
    int size;
	cin>>size;
	int num;
	vector<int> arr;
	
	for(int i=0; i<size; i++){
		cin>>num;
		arr.push_back(num);
	}
	int sum;
	cin>>sum;

   pairSum(arr, sum);	
    return 0;
}