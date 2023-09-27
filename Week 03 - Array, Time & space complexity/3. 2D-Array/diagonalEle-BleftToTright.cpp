#include <iostream>
#include <vector>

using namespace std;
#define ll long long

void printDiagonal(vector<vector<int>> &arr, int rows, int columns) {
    int i = rows-1, j = 0;
    while (i>= 0) {
        cout << arr[i][j] << " ";
        i--;
        j++;
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
