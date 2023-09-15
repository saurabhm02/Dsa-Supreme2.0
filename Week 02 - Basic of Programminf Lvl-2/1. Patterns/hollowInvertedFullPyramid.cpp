// *       * 
//  *     * 
//   *   * 
//    * * 
//     *

#include<iostream>
using namespace std;
#define ll long long

void invertedFullPyramid(int size){
	for(int i=0; i<size; i++){
		for(int j=0; j<i; j++){
			cout<<" ";
		}
		for(int j=0; j<size-i; j++){
			if(j==0 || j==size-i-1){
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
	invertedFullPyramid(size);
	
    return 0;
}