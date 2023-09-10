//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * *

#include<iostream>
using namespace std;
#define ll long long

void fullPyramid(int size){
	for(int rows=0; rows<size; rows++){
		for(int coln=0; coln<size-rows-1; coln++){  // for space
			cout<<" ";
		}
		for(int coln=0; coln<rows+1; coln++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
}
int main()
{
	int size;
	cin>>size;
	fullPyramid(size);
	
    return 0;
}