// Debug the code. Implement selection sort.

#include<bits/stdc++.h>

using namespace std;
#define ll long long

// Before Debug
void selectionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// After Debug


int main()
{


    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
    return 0;
}