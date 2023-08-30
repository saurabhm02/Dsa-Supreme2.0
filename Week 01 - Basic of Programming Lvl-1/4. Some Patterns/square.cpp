// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * *

#include<iostream>
using namespace std;
#define ll long long


void square(int size){
	for(int i=0;i<size;i++){
		for(int j=0; j<size; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main()
{
	int size;
	cin>>size;
	square(size);
    return 0;
}