#include<bits/stdc++.h>

using namespace std;
#define ll long long

class abc{
public:
	int x;
	int *y;

	abc(int _x, int _y) : x(_x), y(new int(_y)) {}

	void print() const{
		cout<<"x: "<<x<<endl<<"Y: "<<y<<endl<<"*Y: "<<*y<<endl;
	}

	// COPY CONSTRUCTOR is called by default if we not define
	// how is it likes
	// it is also called as Shallow copy
	abc(const abc &obj ){
		x = obj.x;
		y = obj.y;
	}

	// // smart DEEP COPY
	// abc(const abc &obj){
	// 	x = obj.x;
	// 	y = new int(*obj.y);
	// }


    // destructor
	~abc(){
		delete y;
	}
};

int main(){ 
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 
	
	// abc a(1, 2);
	// cout<<"printing a obj: "<<endl;
	// a.print();
	// cout<<endl;

	// abc b = a; // by doing this we are doing COPY CONSTRUCTOR

	// cout<<"printing b obj: "<<endl;
	// b.print();
	// cout<<endl;

	// *b.y = 30;
	// cout<<"printing b obj: "<<endl;
	// b.print();
	// cout<<endl;

	// cout<<"printing a obj: "<<endl;
	// a.print();

	abc *a = new abc(1, 2);
	abc b = *a;
	delete a;
	b.print();

    return 0;
}