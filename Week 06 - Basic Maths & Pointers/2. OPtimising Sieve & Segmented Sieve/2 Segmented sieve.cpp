#include<bits/stdc++.h>

using namespace std;
#define ll long long

vector<bool> segmentedSieve(int L, int R){
    vector<bool> sieve(sqrt(R) + 1, true);
    vector<int> basePrimes;
    for(int i = 2; i < sieve.size(); i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSieve(R - L + 1, true); // Corrected initialization
    if(L == 0 || L == 1){
        segSieve[0] = false;
    }
    for(auto prime: basePrimes){
        int first_mult = (L / prime) * prime;
        if(first_mult < L){
            first_mult += prime;
        }
        int j = max(first_mult, prime * prime);
        while(j <= R){
            segSieve[j - L] = false;
            j += prime;
        }
    }
    return segSieve;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int L, R;
    cin >> L >> R;

    vector<bool> segsieve = segmentedSieve(L, R);

    for(int i = 0; i < segsieve.size(); i++){
        if(segsieve[i]){
            cout << i + L << " ";
        }
    }

    return 0;
}
