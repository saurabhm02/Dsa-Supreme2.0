#include<iostream>
#include<vector>
#include <algorithm>


using namespace std;
#define ll long long

void reverseArray(vector<int> &arr){
	int n = arr.size();
	int start = 0;
	int end = n-1;
	while(start < end){
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}
void rotateImage(vector<vector<int>>& matrix) {
	int n = matrix.size();
    for(int i=0;i<n; i++){
		for(int j=i; j<matrix[i].size();j++){
			swap(matrix[i][j], matrix[j][i]);
		}
	}  

	// for(int i=0; i<n; i++){
	// 	reverse(matrix[i].begin(),  matrix[i].end());
	// }

	for(int i=0; i<n; i++){
		reverseArray(matrix[i]);
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

    rotateImage(arr);
	for(int i=0;i<rows; i++){
		for(int j=0; j<columns;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

    return 0;
}