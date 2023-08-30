#include<iostream>
using namespace std;
#define ll long long

void hollowRectangle(int rows, int columns){
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			if(i==0 || i==rows-1 || j== 0 || j== columns-1){
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
	int rows, columns;
	cin>>rows>>columns;
	hollowRectangle(rows, columns);
	
    return 0;
}