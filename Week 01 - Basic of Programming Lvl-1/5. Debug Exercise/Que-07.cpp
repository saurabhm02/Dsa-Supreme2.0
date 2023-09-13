// Que. Debug the code. It is trying to print the given pattern.

/*
Pattern
N = 4
   1
  232
 34543
4567654
*/

// here the ans 

#include<iostream>
using namespace std;
int main(){
     int no;
    cin>>no;
    int i=1;
    int n = 2*no-1;
    while(i<=(no)){
        int gaps = n-2*i+1,k=1;
        int j = i;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps, z = (ch+1)/2;
        while(z>=1){
            cout<<j;
            j = j + 1;
            z = z - 1;
        }
        j = j - 1;
        z = (ch-1)/2;
        while(z>=1){
            j = j - 1;
            cout<<j;
            z = z - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
