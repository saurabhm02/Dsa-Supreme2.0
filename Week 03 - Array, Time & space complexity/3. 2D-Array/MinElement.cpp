#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int minElement(vector<vector<int>> &arr, int rows, int column){
	int MinAns = INT_MAX;
	for(int i=0;i<rows; i++){
		for(int j=0; j<column;j++){
			if(arr[i][j] < MinAns){
				MinAns = arr[i][j] ;
			}
		}
	}
	return MinAns;
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

 cout<<minElement(arr, rows, columns);
	

    return 0;
}