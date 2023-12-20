#include<bits/stdc++.h>

using namespace std;
#define ll long long

vector<bool> Sieve(int n){
    vector<bool> sieve(n+1, true);
    sieve[0] = sieve[1] = false;

    for(int i=2; i<=n; i++){
        if(sieve[i] == true){
            int j = i * 2;
            while(j <= n){
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}

// after  optimised the innner loop by changing the value of j from j=i*2 to j=i*i
vector<bool> Sieve2(int n){
    vector<bool> sieve(n+1, true);
    sieve[0] = sieve[1] = false;

    for(int i=2; i<=n; i++){
        if(sieve[i] == true){
            int j = i * i;
            while(j <= n){
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}


//  further it optimisied by changing the outer loop in which w just run the loop from i*i  
vector<bool> Sieve3(int n){
    vector<bool> sieve(n+1, true);
    sieve[0] = sieve[1] = false;

    for(int i=2; i*i<=n; i++){
        if(sieve[i] == true){
            int j = i * i;
            while(j <= n){
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}

// T.c : O(nlog(logn))

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<bool> primes = Sieve3(n); // Fix the function name here
    for(int i=0; i<=n; i++){
        if(primes[i]){
            cout << i << " ";
        }
    }

    return 0;
}
