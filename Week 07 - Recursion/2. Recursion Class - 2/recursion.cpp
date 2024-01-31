#include<bits/stdc++.h>

using namespace std;
#define ll long long


void solve(int arr[], int size, int index, vector<int> &ans){
    if(index >= size){
        return;
    }

    if(arr[index]%2 == 0){
        ans.push_back(arr[index]);
    }
}

void doubleArray(int arr[], int size, int index){
    if(index >= size){
        return;
    }
    arr[index] = 2 * arr[index];
    doubleArray(arr, size, index+1);
}

int findMin(int arr[], int size, int index, int mini){
    if(index >= size){
        return mini;
    }
    mini = min(mini, arr[index]);
    return findMin(arr, size, index + 1, mini);
}

int findMax(int arr[], int size, int index, int maxi){
    if(index >= size){
        return maxi;
    }
    maxi = max(maxi, arr[index]);

    return findMax(arr, size, index + 1, maxi);
}

int searchArray(int arr[], int size, int index, int target){
    if(index >= size){
        return -1;
    }

    if(arr[index] == target){
        return index;
    }
    return searchArray(arr, size, index + 1, target);
}

void searchArray2(int arr[], int size, int index, int target, vector<int>&ans){
    if(index >= size){
        return;
    }

    if(arr[index] == target){
        ans.push_back(index);
    }
    searchArray2(arr, size, index + 1, target, ans);
}

void printDigits(int num){
    if(num == 0){
        return;
    }
    int digits = num % 10;

    printDigits(num/10);

   cout<<digits<<" ";
}

void printDigits2(int num, vector<int> &ans){
    if(num == 0){
        return;
    }
    int digits = num % 10;

    printDigits(num/10);

   ans.push_back(digits);
}

int digitsToNum(vector<int> &digits){
    int num = 0;
    for(int digit: digits ){
        num = num * 10 + digit;
    }
    return num;
}

int search(string &s, int index, char target){
    if(index >= s.size()){
        return -1;
    }
    if(s[index]  == target){
        return index;
    }
    return search(s, index + 1, target);
}


int main()
{ 
    // int size;
    // cin>>size;
    // int maxi = INT_MIN;
    // int mini = INT_MAX;
    // int target;
    // cin>>target;

    // int arr[size];
    // for(int i=0; i<size; i++){
    //     cin>>arr[i];
    // }

    // doubleArray(arr, size, 0);
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }
    
    // cout<<findMax(arr, size, 0, maxi)<<endl;
    // cout<<findMin(arr, size, 0, mini)<<endl;
    // cout<<searchArray(arr, size, 0, target)<<endl;

    // vector<int> searchArray2Result;
    // searchArray2(arr, size, 0, target, searchArray2Result);
    // for (int i : searchArray2Result) {
    //     cout << i << " ";
    // }


    // int n;
    // cin>>n; 
    // vector<int> ans;
    // printDigits2(n, ans);
    // for (int digit : ans) {
    //     cout << digit << " ";
    // }


    // int size;
    // cin>>size;
    // vector<int> ans(size);
    // for(int i=0; i<size; i++){
    //     cin>>ans[i];
    // }
    // cout<<digitsToNum(ans);

    string s;
    char target;    
    cin>>s;
    cin>>target;
    cout<<search(s, 0, target);
    
    return 0;
}