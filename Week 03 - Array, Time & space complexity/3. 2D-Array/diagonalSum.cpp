#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int diagonalSum(vector<vector<int>> &arr, int rows, int column){
	int sum = 0;
	for(int i=0;i<rows; i++){
		sum = sum + arr[i][i];
	}
	
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

cout<<diagonalSum(arr, rows, columns);
	

    return 0;
}