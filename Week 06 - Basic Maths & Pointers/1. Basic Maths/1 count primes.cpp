// https://leetcode.com/problems/count-primes/description/

#include<bits/stdc++.h>

using namespace std;
#define ll long long


bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int countPrimes1(int n) {
    int count = 0;
    for(int i=0; i<n; i++){
        if(isPrime(i)){
            count++;
        }
    }
    return count;
}

// The above solution is correct but it exist time limit so thats why it not acceptable in leetcode

int countPrimes(int n) {
    if(n == 0) {
        return 0;
    }
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    int ans = 0;
    for(int i=2; i<n; i++){
        if(prime[i]){
            ans++;

            int j = 2 * i;
            while(j < n){
                prime[j] = false;
                j+=i;
            }
        }
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int n;
    cin >> n;

    int result = countPrimes(n);

    cout << "The number of prime numbers less than " << n << " is: " << result << endl;

    return 0;
}