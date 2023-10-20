//  Que. Debug the code. Sort 0s and 1s

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// Before Debug
void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[nextZero] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
		}
	}
}

// After Debug

void sort0and1s2(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
			nextZero++;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
    sort0and1s2(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}