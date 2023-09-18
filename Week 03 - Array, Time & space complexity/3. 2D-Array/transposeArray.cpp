#include<iostream>
#include<vector>

using namespace std;
#define ll long long

void transposeArray(vector<vector<int>> &arr, int rows, int column){
	for(int i=0;i<rows; i++){
		for(int j=i; j<column;j++){
			swap(arr[i][j], arr[j][i]);
		}
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

transposeArray(arr, rows, columns);
	for(int i=0;i<rows; i++){
		for(int j=0; j<columns;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

    return 0;
}