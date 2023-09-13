// Que. Debug the code. It is trying to print the given pattern.
/*
Pattern
1
23
345
4567
*/
// here the ans 


#include<iostream>
using namespace std;
#define ll long long

int main()
{
	int n;
    cin>>n;
    int i=1;
    while(i<n){
        int j = i,count = 1;
        while(count<=i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
    return 0;
}
