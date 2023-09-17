#include<iostream>
#include<vector>
using namespace std;
#define ll long long


void interSectOfArray(vector<int>arr1, vector<int>arr2){
	vector<int>ans;
	for(int i=0; i<arr1.size(); i++){
		int element = arr1[i];
		for(int j=0; j<arr2.size(); j++){
			if(element == arr2[j]){
				ans.push_back(element);
				break;
			}
		}
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

   interSectOfArray(arr1, arr2);	
    return 0;
}