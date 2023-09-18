#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int maxElement(vector<vector<int>> &arr, int rows, int column){
	int MaxAns = INT_MIN;
	for(int i=0;i<rows; i++){
		for(int j=0; j<column;j++){
			if(arr[i][j] > MaxAns){
				MaxAns = arr[i][j] ;
			}
		}
	}
	return MaxAns;
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

 cout<<maxElement(arr, rows, columns);
	

    return 0;
}