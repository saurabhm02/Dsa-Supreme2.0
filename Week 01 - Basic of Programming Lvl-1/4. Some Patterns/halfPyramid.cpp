// *
// * *
// * * *
// * * * * 
// * * * * * 


#include<iostream>
using namespace std;
#define ll long long


void halfPyramid(int rows){
	for(int i=0; i<rows; i++){
		for (int j=0; j<i+1; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main()
{
	int rows;
	cin>>rows;
	halfPyramid(rows);
	
    return 0;
}