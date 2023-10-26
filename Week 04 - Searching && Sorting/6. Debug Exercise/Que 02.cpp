// Debug the code. Find square root of x.

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

// Before Debug
int mySqrt(int x) {
    if (x == 0)
        return x;
    int first = 1, last = x;
    while (first <= last) {
        int mid = first + (last - first) / 2;
        if (mid  == x / mid)
            return mid;
        else if (mid > x / mid) {
            last = mid;
        }
        else {
            first = mid;
        }
    }
    return mid;
}


// After Debug
// Here we have to do if the mid > x / mid
// then we have to find left side
// other wise move right side
// and return last
int mySqrt2(int x) {
    if (x == 0)
        return x;
    int first = 1, last = x;
    while (first <= last) {
        int mid = first + (last - first) / 2;
        if (mid  == x / mid)
            return mid;
        else if (mid > x / mid) {
            last = mid - 1;
        }
        else {
            first = mid + 1;
        }
    }
    return last;
}
int main()
{
	int x;
    cin >> x;

    cout<<mySqrt2(x);
    return 0;
}