//  Que. Debug the code. Convert Binary to Decimal.

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

//Before debug

// int main()
// {
// 	int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n/10;
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n%10;
//     }
//     cout<<sum;
//     return 0;
// }


// After Debug

int main() {
    int n,sum=0,factor=1;
    cin>>n;
    while(n!=0){
        int digit = n%10; // here the change is 
        sum = sum + digit*factor;
        factor = 2*factor;
        n = n/10;
    }
    cout<<sum;
    return 0;
}