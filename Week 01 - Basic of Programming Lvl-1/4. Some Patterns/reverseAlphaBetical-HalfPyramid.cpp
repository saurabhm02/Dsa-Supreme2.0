// A 
// A B A 
// A B C B A 
// A B C D C B A 
// A B C D E D C B A

#include<iostream>
using namespace std;
#define ll long long

void reverseAlphabeticalHalfPyramid(int rows){
	char ch;
	for(int i=0; i<rows; i++){
		for (int j=0; j<i+1; j++){
			ch = j+1+'A'-1;
			cout<<ch<<" ";
		}
		for(char j = ch; j>'A';){
			j = j-1;
			cout<<j<<" ";

	    }
	    cout<<endl;
	}

}
int main()
{
	int rows;
	cin>>rows;
	reverseAlphabeticalHalfPyramid(rows);
	
    return 0;
}