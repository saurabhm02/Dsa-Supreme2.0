// * * * *   * * * * 
// * * *       * * * 
// * *           * * 
// *               *


#include<iostream>
using namespace std;
#define ll long long

void hollowFilledFullPyramid(int size){
	for(int i=0; i< size; i++){
		for(int j=0; j<size-i; j++){
			cout<<"* ";
		}
		for(int j=0; j< 2*i+1; j++){  // for Space
			cout<<"  ";
		}
		for(int j=0; j<size-i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main()
{
	int size;
    cin>>size;
    hollowFilledFullPyramid(size);
	
    return 0;
}