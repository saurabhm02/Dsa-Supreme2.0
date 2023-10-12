// Que. Debug the code. Find the second largest in the code.

#include<iostream>
using namespace std;
#include <climits>

// Before Debug

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
// 	    if(max<arr[i]){
// 	      max=arr[i];
//       }
//      }
//      int second = INT_MIN;
//      for(int i=0;i<n;i++){
// 	     if(max>arr[i] && arr[i]>second){
// 	       second = arr[i];
//        }
//      }
//      cout<<second;
// 	 return 0;
// }

// After Debug


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Just add Corner Case to increase efficieny of the code
    if(n==0||n==1){
        cout<<INT_MIN;
    }
    else{
        int max = INT_MIN;
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        int second = INT_MIN;
        for(int i=0;i<n;i++){
            if(max>arr[i] && arr[i]>second){
                second = arr[i];
            }
        }
        cout<<second;
    }
}