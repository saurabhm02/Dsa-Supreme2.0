// 1 
// 1 2 
// 1   3 
// 1     4 
// 1 2 3 4 5

#include<iostream>
using namespace std;
#define ll long long

void numericHollowHalfPyramid(int size){
	for(int i=0; i<size; i++){
		for(int j=0; j< i+1; j++){
			if(j == 0 || j == i || i == size-1){
				cout<<j+1<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}
int main()
{
	int size;
	cin>>size;
	numericHollowHalfPyramid(size);
    return 0;
}