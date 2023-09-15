
// * * * * * 
// * * * * 
// * * * 
// * * 
// *

#include<iostream>
using namespace std;
#define ll long long


void invertedHalfPyramid(int rows){
	for(int i=0; i<rows; i++){
		for(int j=0; j<rows-i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main()
{
	int rows;
	cin>>rows;
	invertedHalfPyramid(rows);
	
    return 0;
}