#include<iostream>
#include<vector>
using namespace std;
#define ll long long


void pairSum(vector<int>arr, int sum){
	for(int i=0; i<arr.size(); i++){
		int element = arr[i];

		for(int j=i+1; j<arr.size(); j++){
			int element2 = arr[j];

			for(int k=j+1; k<arr.size(); k++){
				if(element + element2 + arr[k] == sum){
				cout<<"("<<element<<", "<<element2<<", "<<arr[k]<<")"<<endl;
			}
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