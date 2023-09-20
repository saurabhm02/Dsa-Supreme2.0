// https://practice.geeksforgeeks.org/problems/common-elements1132/1

#include<bits/stdc++.h>
#include<vector>

using namespace std;
#define ll long long

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
           vector<int>ans;
           set<int>st;
           int i, j, k;
           i = j = k = 0;
           while(i < n1 && j < n2 && k < n3){
               if(A[i] == B[j] && B[j] == C[k]){
                   st.insert(A[i]);
                   i++, j++, k++;
               }
               else if(A[i] < B[j]){
                   i++;
               }
               else if(B[j] < C[k]){
                   j++;
               }
               else{
                   k++;
               }
           }
           for(auto i:st){
               ans.push_back(i);
           }
           return ans;
        }
int main()
{
	int n1, n2, n3;
	cin>>n1>>n2>>n3;
    int A[n1], B[n2], C[n3];
    for (int i = 0; i < n1; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < n3; i++) {
        cin >> C[i];
    }

    vector<int> result = commonElements(A, B, C, n1, n2, n3);
    if (result.empty()) {
        cout << "No common elements found!!" << endl;
    } 
    else {
        cout << "Common elements: ";
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}