#include <iostream>
#include <vector>

using namespace std;
#define ll long long

void printDiagonal(vector<vector<int>> &arr, int rows, int columns) {
    int i = 0, j = columns - 1;
    while (i < rows && j >= 0) {
        cout << arr[i][j] << " ";
        i++;
        j--;
    }
    
}

void printDiagonal2(vector<vector<int>> &arr, int rows, int columns) {
    int i=0, j = columns-1;
    for(; j>=0; j--){
        cout<<arr[i++][j]<<" ";
    }
}
int main() {
    int rows, columns;
    cin >> rows >> columns;
    vector<vector<int>> arr(rows, vector<int>(columns));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> arr[i][j];
        }
    }

    printDiagonal(arr, rows, columns);
    cout << endl;

    return 0;
}
