//Que.  Debug the code. Print all the prime numbers that lie in the range 2 to N (both inclusive)

#include<iostream>
#include<vector>

using namespace std;
#define ll long long


// Before Debug

// int main(){
//     int n, flag=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         flag = 1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

// After debug

int main(){
    int n, flag=1;
    cin>>n;
    for(int i=2;i<=n;i++){  // No changes
        flag = 1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag = 0;
            }
        }
        if(flag==1){
            cout<<i<<endl;
        }
    }
    return 0;
}