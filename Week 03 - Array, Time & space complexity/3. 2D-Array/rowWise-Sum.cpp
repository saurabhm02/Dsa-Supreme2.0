#include<iostream>
#include<vector>

using namespace std;
#define ll long long

void rowWiseSum(vector<vector<int>> &arr, int rows, int column){
	for(int i=0;i<rows; i++){
		int sum = 0;
		for(int j=0; j<column;j++){
			sum = sum + arr[i][j];
		}
		cout<<sum<<endl;
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

rowWiseSum(arr, rows, columns);
	

    return 0;
}