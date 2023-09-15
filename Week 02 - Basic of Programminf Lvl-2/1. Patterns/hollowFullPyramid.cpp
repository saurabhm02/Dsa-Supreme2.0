//     * 
//    * * 
//   *   * 
//  *     * 
// *       *

#include<iostream>
using namespace std;
#define ll long long

void hollwFullPyramid(int size){
	for(int rows=0; rows<size; rows++){
		for(int coln=0; coln<size-rows-1; coln++){  // for space
			cout<<" ";
		}
		for(int coln=0; coln<rows+1; coln++){
			if(coln == 0 || coln == rows+1-1){
				cout<<"* ";
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
	hollwFullPyramid(size);
	
    return 0;
}