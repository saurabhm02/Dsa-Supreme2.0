#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int a = 5;
    int* ptr = &a;
    int** ptr2 = &ptr;
    int*** ptr3 = &ptr2;
    int**** ptr4 = &ptr3;

    return 0;
}