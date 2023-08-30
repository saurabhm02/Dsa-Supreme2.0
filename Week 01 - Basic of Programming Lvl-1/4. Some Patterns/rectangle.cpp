
// * * * * * * 
// * * * * * * 
// * * * * * * 
// * * * * * *


#include<iostream>
using namespace std;
#define ll long long

void rectangle(int rows, int columns){
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main()
{
	int rows, columns;
	cin>>rows>>columns;
	rectangle(rows, columns);
	
    return 0;
}