#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    // array of pointer 
    int * ar[5];
    int num[5] = {1, 2, 3, 4, 5};
    ar[0] = &num[0];
    ar[1] = &num[1];

    cout<<ar[0]<<endl;
    cout<<ar[1]<<endl;

    cout<<*ar[0]<<endl;
    cout<<*ar[1]<<endl;
   
    // pointer to an array
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr1 = arr;

    int (*ptr2)[5] = &arr;
    cout<<(*ptr2)[0]<<endl;



    

    return 0;
}