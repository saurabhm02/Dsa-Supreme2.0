// Que. Debug the code. Sum of array.

#include<iostream>
using namespace std;

// before Debug

// int main(){
//     int n, sum;
//     cin >> n;
//     int input[n];
//     for(int i=0;i<n;i++){
//         cin >> input[0];
//     }
//      for(int i=0; i<n; i++){
//          sum = sum + input[i];
//      }
//     cout << sum << endl;
//     return 0;
// }

int main(){
    int n;
    cin >> n;
    int sum = 0; // initialize sum with 0;
    int input[n];
    for(int i=0;i<n;i++){
        cin >> input[i]; //take input of all the values from 0 to n
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;
}