#include<iostream>
#include<vector>
#include<cmath> 

using namespace std;
#define ll long long

void missingElement(int* arr, int size) {
	// Negative marking method
    for(int i = 0; i < size; i++) {
        int index = abs(arr[i]) - 1; 
        if(arr[index] > 0) {
            arr[index] *= -1;
        }
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) {
            cout << i + 1 << " ";
        }
    }

    // T.c : O(n)
    // S.c : O(1)
}

void missingElement2(int* arr, int size){
	// Swapping and Sorting Method
	int i=0;
	while(i < size){
		int index = arr[i] - 1;
		if(arr[i] != arr[index]){
			swap(arr[i], arr[index]);
		}
		else{
			++i;
		}
	}
    
    for(int i = 0; i < size; i++) {
        if(arr[i] != arr[i+1]){
        	cout<<i + 1<<" ";
        }
    }
    // T.c : O(n)
    // S.c : O(1)
	
}

int main() {
    int size;
    cin >> size;
    int arr[500];
    for(int i = 0; i < size; i++) { 
        cin >> arr[i];
    }
    missingElement(arr, size);
    return 0;
}
