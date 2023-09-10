// * * * * * 
// *     * 
// *   * 
// * * 
// *

#include<iostream>
using namespace std;
#define ll long long

void hollowInvertedHalfPyramid(int size){
	for(int i=0; i<size; i++){
		for(int j=0; j<size-i; j++){
			if(i == 0 || i == size-1){
				cout<<"* ";
			}
			else{
				if(j == 0 || j == size-i-1){
					cout<<"* ";
				}
				else{
					cout<<"  ";
				}
			}
		}
		cout<<endl;
	}
}
int main()
{
	int size;
	cin>>size;
	hollowInvertedHalfPyramid(size);
	
    return 0;
}