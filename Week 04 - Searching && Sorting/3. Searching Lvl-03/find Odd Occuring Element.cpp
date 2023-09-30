#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// hard Que
// THis que is full of Cache

// T.c :- O(logn);
int oddOccuringElement(int arr[], int size){
	int s = 0;
	int e = size - 1;

	while(s <= e){
		int mid = s + (e - s) /2;

		if(s == e){
			return s;
		}
		if(mid & 1){ //midd&1 ->odd Number
			if(mid - 1 >= 0 &&arr[mid - 1] == arr[mid]){
				s = mid + 1;
			}
			else{
				e = mid - 1;
			}
		}
		else{
			if(mid + 1 < size && arr[mid] == arr[mid + 1]){
				s = mid + 2;
			}
			else{
				e = mid; // it indi- yy to rigght p hu 
				        // y to mai ans p hi hu 
				        // thats why e = mid;
				// bcoz e = mid - 1 -> s ans lost ho jaenga milnga h nhi kbhi
			}
		}
	}
	return -1;
}
int main()
{
	int size;
	cin>>size;

	int arr[100];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}

	int ansValue = oddOccuringElement(arr, size);

	cout<<"index No- "<<ansValue<<endl;
	cout<<"And Value:-"<<arr[ansValue]<<endl;
    return 0;
}
