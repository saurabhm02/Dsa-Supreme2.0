#include<iostream>
#include<vector>
#include<algorithm> //for using Custom Comparator

using namespace std;
#define ll long long

void vectorSort(vector<int> &arr){ // it is for increasing order
	sort(arr.begin(), arr.end());
}

bool myCom(int &a, int &b){
    // return a < b; // for increasing order
    return a > b; // for decreasing order

}
void vectorSortD(vector<int> &arr){ // it is for decreasing order
    sort(arr.begin(), arr.end(), myCom);
}


void printVV(vector<vector<int>> &v){
    for(int i=0; i<v.size(); i++){
        vector<int> &temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout<<"("<<a<<","<<b<<")"<<endl;
    }
    cout<<endl;
}

bool myComFor1stIndex(vector<int> &a, vector<int> &b){
    // return a[0] < b[0]; // 0th Index sorting
    return a[1] < b[1]; // 1th Index sorting
}
int main()
{
	int size;
    cin >> size;

 //    vector<int> arr(size); 
 //    for(int i = 0; i < size; i++){
 //        cin >> arr[i];
 //    }
     
    vector<vector<int>> arr;
    for(int i=0; i< size; i++){
        int a, b;
        cin>>a>>b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        arr.push_back(temp);
    }
    
    printVV(arr);
    cout<<"sorting on the basis of 0th index"<<endl;
    sort(arr.begin(), arr.end()); 
    printVV(arr);
    cout<<"sorting on the basis of 1st index"<<endl;
    sort(arr.begin(), arr.end(), myComFor1stIndex);
    printVV(arr);
   
    return 0;
}