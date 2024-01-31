#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int size, int index) {
    if (index >= size) {
        return true;
    }

    if (index > 0 && arr[index] > arr[index - 1]) {
        return checkSorted(arr, size, index + 1);
    } else {
        return false;
    }
}

int binarySearch(int arr[], int s, int e, int target) {
    if (s > e) {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == target) {
        return mid;
    }
    if (arr[mid] < target) {
        return binarySearch(arr, mid + 1, e, target);
    } else {
        return binarySearch(arr, s, mid - 1, target);
    }
}

void findSubSequences(string str, string ans, int index, vector<string> &a){
	if(index >= str.length()){
		cout<<ans<<endl;
		a.push_back(ans);
		return;
	}

	char ch = str[index];


	//excluding proces
	findSubSequences(str, ans, index + 1, a);

	// including ch charachter in ans string
	ans.push_back(ch);

	findSubSequences(str, ans, index + 1, a);

}

int main() {
    // int size;
    // cin >> size;
    // int arr[size];

    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }

    // bool isSorted = checkSorted(arr, size, 1);
    // if (isSorted) {
    //     cout << "Sorted" << endl;
    // } else {
    //     cout << "Not Sorted" << endl;
    // }


 //    int size;
	// cin >> size;
	// int arr[size];

	// for (int i = 0; i < size; i++) {
	//     cin >> arr[i];
	// }

 //    int target;
 //    cin >> target;
 //    int s = 0;
 //    int e = size - 1;

 //    cout << binarySearch(arr, s, e, target);

	string str, ans ="";
	cin>>str;
	vector<string> a;


	findSubSequences(str, ans, 0, a);
	for(string s: a){
		cout<<s<<endl;
	}

    return 0;
}
