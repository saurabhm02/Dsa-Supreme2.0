
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5


#include<iostream>
using namespace std;
#define ll long long

void numericHalfPyramid(int rows){
	for(int i=0; i<rows; i++){
		for (int j=0; j<i+1; j++){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int rows;
	cin>>rows;
	numericHalfPyramid(rows);
	
    return 0;
}