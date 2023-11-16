// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/

#include<bits/stdc++.h>

using namespace std;
#define ll long long

int garbageCollection(vector<string>& garbage, vector<int>& travel) {
    int pickM = 0;
    int pickP = 0;
    int pickG = 0;

    int travelM = 0;
    int travelP = 0;
    int travelG = 0;

    int lastM = 0;
    int lastP = 0;
    int lastG = 0;

    for(int i=0; i<garbage.size(); i++){
        string curr = garbage[i];

        for(int j=0; j<curr.length(); j++){
            char ch = curr[j];

            if(ch == 'M'){
                pickM++;
                lastM = i;
            }
            else if(ch == 'P'){
                pickP++;
                lastP = i;
            }
            else if(ch == 'G'){
                pickG++;
                lastG = i;
            }
        }
    }

   for(int i=0; i<lastM; i++){
       travelM += travel[i];
   }
   for(int i=0; i<lastP; i++){
       travelP += travel[i];
   }
   for(int i=0; i<lastG; i++){
       travelG += travel[i];
   }

    int ans = (pickM + travelM) + (pickP + travelP) + (pickG + travelG);
   return ans;     
        
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif 

  int n;
  cin >> n;
  vector<string> garbage(n);
  for (int i = 0; i < n; i++) {
    cin >> garbage[i];
  }
  vector<int> travel(n-1);
  for (int i = 0; i < n-1; i++) {
    cin >> travel[i];
  }

  int totalTime = garbageCollection(garbage, travel);
  cout << totalTime << endl;

  return 0;
}