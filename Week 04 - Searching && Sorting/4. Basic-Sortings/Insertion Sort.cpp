#include<iostream>
#include<vector>

using namespace std;
#define ll long long

void insetionSort(vector<int> &arr){
	int n = arr.size();

	for(int i=1; i<n; i++){
		int key = arr[i];
		int j = i - 1;

        // Now after that we have to move elements of arr[0..i-1] that are greater than 
        // key to one position ahead of their current position
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}


int main() {
    int size;
    cin >> size;

    vector<int> arr(size); 
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    insetionSort(arr);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
