#include<iostream>
using namespace std;
#define ll long long

void linearSearch(int arr[], int size, int target){
    bool found = 0; 
	for(int i=0; i<size; i++){
		if(arr[i] == target){
			found = 1;
			break;
		}
	}

	if(found == 1){
		cout<<"Target is found";
	}
	else{
		cout<<"Not Found";
	}
}

bool linearSearch2(int arr[], int size, int target){
	for(int i=0; i<size; i++){
		if(arr[i] == target){
			return true;
		}
	}
	return false;
}


int main()
{
	int size;
	cin>>size;
	int arr[100];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	// linearSearc(arr, size, target);

	bool ans  = linearSearch2(arr, size, target);
	if(ans == 1){
		cout<<"target Found";
	}
	else{
		cout<<"Target not Found";	
	}
	
    return 0;
}