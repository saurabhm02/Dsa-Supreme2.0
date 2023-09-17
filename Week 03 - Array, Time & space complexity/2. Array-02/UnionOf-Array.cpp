#include<iostream>
#include<vector>

using namespace std;
#define ll long long

void unionArray(vector<int>arr1, vector<int>arr2, int sizeA, int sizeB){
	vector<int>ans;
	for(int i=0; i<sizeA; i++){
		ans.push_back(arr1[i]);
	}

	for(int i=0; i<sizeB; i++){
		ans.push_back(arr2[i]);
	}

	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<" ";
	}

}
int main()
{	
	int size1, size2;
	cin>>size1>>size2;
	int num1, num2;
	vector<int> arr1;
	vector<int> arr2;
	for(int i=0; i<size1; i++){
		cin>>num1;
		arr1.push_back(num1);
	}

	for(int i=0; i<size2; i++){
		cin>>num2;
		arr2.push_back(num2);
	}

   unionArray(arr1, arr2, size1, size2);




    return 0;
}