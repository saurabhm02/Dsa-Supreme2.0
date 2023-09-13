// * * * *   * * * * 
// * * *       * * * 
// * *           * * 
// *               * 
// *               * 
// * *           * * 
// * * *       * * * 
// * * * *   * * * *

#include<iostream>
using namespace std;
#define ll long long

void hollowFilledFullDiamand(int size){
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

	for(int i=0; i< size; i++){
		for(int j=0; j<i+1; j++){
			cout<<"* ";
		}
		for(int j=0; j< 2*size - 2*i - 1; j++){  // for Space
			cout<<"  ";
		}
		for(int j=0; j<i+1; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main()
{
	int size;
    cin>>size;
    hollowFilledFullDiamand(size);
	
    return 0;
}