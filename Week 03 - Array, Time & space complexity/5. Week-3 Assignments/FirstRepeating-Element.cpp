#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
#define ll long long

int firstRepeated(int arr[], int n) {
        unordered_map<int, int>hash;
        for(int i=0; i<n; i++){
            hash[arr[i]]++;
        }
        
        for(int i=0; i<n; i++){
            if(hash[arr[i]] > 1){
                return i + 1;
            }
        }
        return -1;
        
        // T.c : O(n)
        // S.c : O(n)
    }

int main()
{
	int size;
    cin >> size;
    int arr[500];
    for(int i = 0; i < size; i++) { 
        cin >> arr[i];
    }
    cout<<firstRepeated(arr, size);
    return 0;
}