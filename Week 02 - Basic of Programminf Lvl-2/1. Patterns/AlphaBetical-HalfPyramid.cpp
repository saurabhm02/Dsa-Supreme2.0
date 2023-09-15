// A 
// A B 
// A B C 
// A B C D 
// A B C D E

#include<iostream>
using namespace std;
#define ll long long

void alphabeticalHalfPyramid(int rows){
	for(int i=0; i<rows; i++){
		for (int j=0; j<i+1; j++){
			char ch = j+1+'A'-1;
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int rows;
	cin>>rows;
	alphabeticalHalfPyramid(rows);
	
    return 0;
}