#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve(int *arr, int n){  //int arr[] and itn *arr are same bcoz both are declaring pointer to an integer

	// cout<<"size of arr in func : "<<sizeof(arr)<<endl;
	// cout<<"solve arr : "<<arr<<endl;
	// cout<<"solve &arr : "<<&arr<<endl;

	*arr = *arr + 1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int arr[4] = {10, 20, 30, 40};
    for(int i=0; i<4; i++){
		cout<<arr[i]<<" ";
	}
    // cout<<"size of arr : "<<sizeof(arr)<<endl;
    solve(arr, 4);

    // cout<<"main arr : "<<arr<<endl;
	// cout<<"main &arr : "<<&arr<<endl;
    
    cout<<endl;
	for(int i=0; i<4; i++){
		cout<<arr[i]<<" ";
	}
    return 0;
}