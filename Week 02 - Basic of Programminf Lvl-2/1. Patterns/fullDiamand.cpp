//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     *
#include<iostream>
using namespace std;
#define ll long long

void fullDiamand(int size){
	for(int rows=0; rows<size; rows++){
		for(int coln=0; coln<size-rows-1; coln++){  // for space
			cout<<" ";
		}
		for(int coln=0; coln<rows+1; coln++){ 
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=0; i<size; i++){
		for(int j=0; j<i; j++){ // for space
			cout<<" ";
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
	fullDiamand(size);
	
    return 0;
}