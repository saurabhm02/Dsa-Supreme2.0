#include<iostream>
#include<vector>

using namespace std;
#define ll long long

void transposeArray(vector<vector<int>> &arr, int rows, int column){
	for(int i=0;i<rows; i++){
		for(int j=i; j<column;j++){
		 // inbuilt method of Swaping
			swap(arr[i][j], arr[j][i]); 
		}
	}
}
void transposeArray2(vector<vector<int>> &arr, int rows, int column){
	for(int i=0;i<rows; i++){
		for(int j=i; j<column;j++){
           // swap by  using temp
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
}
void transposeArray3(vector<vector<int>> &arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < columns; j++) { 

        	//  Swap by using + -
            arr[i][j] = arr[i][j] + arr[j][i];
            arr[j][i] = arr[i][j] - arr[j][i];
            arr[i][j] = arr[i][j] - arr[j][i];
        }
    }
}

void transposeArray4(vector<vector<int>> &arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < columns; j++) {

        	// swap by using XOR method
            arr[i][j] = arr[i][j] ^ arr[j][i];
            arr[j][i] = arr[i][j] ^ arr[j][i];
            arr[i][j] = arr[i][j] ^ arr[j][i];
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

transposeArray4(arr, rows, columns);
	for(int i=0;i<rows; i++){
		for(int j=0; j<columns;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

    return 0;
}