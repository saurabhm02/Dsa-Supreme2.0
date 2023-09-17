#include<iostream>
#include<vector>
using namespace std;
#define ll long long


void PrintAllPairs(vector<int>v, int size){
	int ans = 0;
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			for(int k=0; k<size; k++){
				cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
			}
		}
		cout<<endl;
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

   PrintAllPairs(arr, size);
    return 0;
}