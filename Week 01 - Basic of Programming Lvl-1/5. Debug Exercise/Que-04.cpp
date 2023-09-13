// Que. Debug the code. It is trying to print the given pattern.

/*
Pattern
N = 4
1
22
333
4444
*/
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
	        cout<<i;
        }
    cout<<endl;
    }
}

