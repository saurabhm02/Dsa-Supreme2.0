#include<bits/stdc++.h>

using namespace std;
#define ll long long

void lastOccLTR(string &s, char x, int i, int& ans){
    if(i >= s.size()){
        return;
    }
    if(s[i] == x){
        ans = i;
    }
    lastOccLTR(s, x, i + 1, ans);
}

void lastOccRTL(string &s, char x, int i, int& ans){
    if(i < 0){
        return;
    }
    if(s[i] == x){
        ans = i;
        return;
    }
    lastOccRTL(s, x, i - 1, ans);
    
}

int main(){ 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    string str;
    cin >> str;
    char x;
    cin >> x;
    int ans = -1;
    lastOccLTR(str, x, 0, ans);
    cout << ans << endl;
    lastOccRTL(str, x, str.size()-1, ans);
    cout<<ans<<endl;

    return 0;
}
