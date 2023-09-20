// https://practice.geeksforgeeks.org/problems/key-pair5616/1

// OutPut
// 6  // size
// 1 4 45 6 10 8 // array
// 16  // target

// 1  // it means true

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define ll long long
bool hasArrayTwoCandidates(vector<int>& arr, int x) {
    int n = arr.size();
    sort(arr.begin(), arr.end()); 
    
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        
        if (sum == x) {
            return true; 
        } else if (sum < x) {
            left++;
        } else {
            right--;
        }
    }
    
    return false; 
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int target;
    cin >> target;
    
    cout << hasArrayTwoCandidates(arr, target);
    
    return 0;
}
