#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int uniqueNum(vector<int>v, int size){
	int ans = 0;
	for(int i=0; i<size; i++){
		ans = ans^v[i];
	}
	return ans;
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

	int res = uniqueNum(arr, size);
	cout<<res;
    return 0;
}