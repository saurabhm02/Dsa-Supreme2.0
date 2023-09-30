// 69. Sqrt(x)
// https://leetcode.com/problems/sqrtx/description/ 

#include<iostream>
#include<vector>

using namespace std;
#define ll long long

int mySqrt(int x) {
    int s = 0;
    int e = x;
    int ans = -1;
    
    while(s <= e){
        long long int mid = s + (e - s)/2;
        if(mid * mid == x){
            return mid;
        }
        else if(mid * mid < x){
            ans = mid;
            s = mid + 1;
        }
        else{
            e =  mid - 1;
        }
    }
    return ans;
}

// for approxiamte value
double mySqrt2(int x) {
    double s = 0.0;
    double e = static_cast<double>(x); // Convert x to double
    double ans = -1.0;
    double epsilon = 1e-6; // A small value for precision

    while (e - s > epsilon) {
        double mid = s + (e - s) / 2.0;
        double square = mid * mid;

        if (square == x) {
            return mid;
        } else if (square < x) {
            ans = mid;
            s = mid;
        } else {
            e = mid;
        }
    }
    return ans;
}

int main()
{
	int x;
    cin >> x;

    if (x < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        double res = mySqrt2(x);
        cout<<res<<endl;
    }

    return 0;
}