#include<iostream>
using namespace std;
#define ll long long

void numericPattern(int size){
	for(int i=0; i< size; i++){
		for(int j=0; j<2*i+1; j++){
			if(j == 0 || j == 2*i+1-1){
				cout<<j+1;
			}
			else{
				cout<<" ";
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