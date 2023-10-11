#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// IN ICreasing ORder
void selectionSortI(vector<int> &arr){
	int n = arr.size();
	for(int i=0; i<n-1; i++){
		int minIndex = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}

	// T.c = O(n) * O(n)
	//     = O(n*n)
	//     = O(n2)

	// S.c = O(1)
}

// IN decreasing Ordr
void selectionSortD(vector<int> &arr){
	int n = arr.size();
	for(int i=0; i<n-1; i++){
		int minIndex = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] > arr[minIndex]){
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}

	// T.c = O(n) * O(n)
	//     = O(n*n)
	//     = O(n2)

	// S.c = O(1)
}


// SWap By using Temp varible
void selectionSortT(vector<int> &arr){
	int n = arr.size();
	for(int i=0; i<n-1; i++){
		int minIndex = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
	}

	// T.c = O(n) * O(n)
	//     = O(n*n)
	//     = O(n2)

	// S.c = O(1)
}

// +- & XOR method is not suitable for the selection sort bcoz of OverFlow


int main()
{
	int size;
    cin >> size;

    vector<int> arr(size); 
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    selectionSortP(arr);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}