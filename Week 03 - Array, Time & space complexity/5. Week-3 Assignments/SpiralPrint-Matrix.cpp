// https://leetcode.com/problems/spiral-matrix/description/

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int tElements = m*n;

        int sRow = 0;
        int eCol = n-1;
        int eRow = m-1;
        int sCol = 0;

        int count = 0;
        while(count < tElements){
            for(int  i=sCol; i<=eCol && count < tElements; i++){  // Starting Row
                ans.push_back(matrix[sRow][i]);
                count++;

            }
            sRow++;

            for(int  i=sRow; i<=eRow && count < tElements; i++){  // ending column
                ans.push_back(matrix[i][eCol]);
                count++;
            }
            eCol--;

            for(int  i=eCol; i>=sCol && count < tElements; i--){  // endingg row
                ans.push_back(matrix[eRow][i]);
                count++;
            }
            eRow--;

            for(int  i=eRow; i>=sRow && count < tElements; i--){  // Starting column
                ans.push_back(matrix[i][sCol]);
                count++;
            }

            sCol++;

        }
        return ans;
    }
int main()
{
	int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> result = spiralOrder(matrix);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}