#include<bits/stdc++.h>

using namespace std;
#define ll long long

int binarySearch(vector<int> &arr, int s, int e, int x){
	while(s <= e){
		int mid = s + (e - s) /2;
		if(arr[mid] == x){
			return mid;
		}
		else if(arr[mid] < x){
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	return -1;
}

int exSearch(vector<int> &arr, int n, int x){
	if(arr[0] == x){
		return 0;
	}
	int i = 1;
	while(i < n && arr[i] <= x){
		i = i * 2;
	}
	return binarySearch(arr, i/2, min(i, n-1), x);

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
    	cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<exSearch(arr, n, x);

    return 0;
}