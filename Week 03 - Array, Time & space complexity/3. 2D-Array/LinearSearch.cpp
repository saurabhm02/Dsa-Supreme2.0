#include<iostream>
#include<vector>

using namespace std;
#define ll long long

bool linearSearch(vector<vector<int>> &arr, int rows, int column, int target){
	for(int i=0;i<rows; i++){
		for(int j=0; j<column;j++){
			if(arr[i][j] == target){
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int rows, columns;
	cin>>rows>>columns;
	vector<vector<int>> arr(rows, vector<int>(columns));
	for(int i=0;i<rows; i++){
		for(int j=0; j<columns;j++){
			cin>>arr[i][j];
		}
	}
	int target;
	cin>>target;

	bool result = linearSearch(arr, rows, columns, target);
	
	if(result){
		cout<<"Target is found";
	}
	else{
		cout<<"Not Found";
	}
    return 0;
}