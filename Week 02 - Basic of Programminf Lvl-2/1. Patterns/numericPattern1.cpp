// 1
// 2*2
// 3*3*3
// 4*4*4*4

#include<iostream>
using namespace std;
#define ll long long

void numericPattern(int size){
	for(int i=0; i< size; i++){
		for(int j=0; j< 2*i+1; j++){
			if(j%2 == 1){
				cout<<"*";
			}
			else{
				cout<<i+1;
			}
		}
		cout<<endl;
	}
}
int main()
{
	int size;
	cin>>size;
	numericPattern(size);
    return 0;
}