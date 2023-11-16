#include<bits/stdc++.h>

using namespace std;
#define ll long long

class Solution {
public:
    static std::string str;
    static bool compareComparator(char c1, char c2) {
        return (str.find(c1) < str.find(c2));
    }

    string customSortString(std::string order, std::string s) {
        str = order;
        sort(s.begin(), s.end(), compareComparator);
        return s;
    }
};

string Solution::str;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    Solution solution;
    
    string order, s;
    cin >> order;
    cin >> s;

    string result = solution.customSortString(order, s);
    cout << result << endl;
    return 0;
}