// Que. Debug the code. Correct the code for printing the pattern


/*
Pattern for N = 4
4444
333
22
1
*/

#include<iostream>
using namespace std;

// Before Debug

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<n;i++){
//         for(j=i;j<n;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// After Debug
int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){ //Add equal sign 
        for(j=i;j<=n;j++){ //Add equal sign 
            cout<<n - i + 1; // some changes here to get the proper pattern
        }
        cout<<endl;
    }
}