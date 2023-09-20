#include<iostream>
#include<vector>

using namespace std;
#define ll long long

void wavePrintMatrix(vector<vector<int>> arr) {
    int rows = arr.size();
    int cols = arr[0].size();

    for (int i = 0; i < cols; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < rows; j++) {
                cout << arr[j][i] << " ";
            }
        } else {
            for (int j = rows - 1; j >= 0; j--) {
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    wavePrintMatrix(matrix);

    return 0;
}
