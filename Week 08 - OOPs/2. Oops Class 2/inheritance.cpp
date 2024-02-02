#include<bits/stdc++.h>

using namespace std;
#define ll long long

// Single inheritance

// class Animal{
// public:
// 	string name;
// 	int age;
// 	void eat(){
// 		cout<<"eating"<<endl;
// 	}
// };

// class Dog: public Animal{

// };


// multiLevel inheritance

// class Fruit{
// public:
// 	string name;
// };

// class Mango: public Fruit{
// public:
// 	int weight;
// };

// class Alphanso: public Mango{
// public:
// 	int sugarLevel;
// };


// Multiple inheritance

// class Tiger{
// public:
// 	int height;
// 	Tiger(){
// 		height = 5;
// 	}
// };

// class Lion{
// public:
// 	int weight;
// 	Lion(){
// 		weight = 10;
// 	}
// };
// class D{
// public:
// 	int weight;
// 	D(){
// 		weight = 20;
// 	}
// };

// class Liger: public Tiger, public Lion, public D{
// public:
// 	int size;
// 	Liger(){
// 		size = this->height * this->Lion::weight * this->D::weight;
// 	}
// };



// Heirarichal inheritance

// class Engineer{
// public:
// 	int a;
// 	int b;

// 	void s(){
// 		cout<<"Calling from s "<<endl;
// 	}
// };

// class Math: public Engineer{
// public:
// 	int c;
// 	int d;
// };

// class Physics: public Engineer{
// public:
// 	int e;
// 	int f;
// };


int main(){ 
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 
	
	// Dog d1;
	// d1.eat();

	// Alphanso a;
	// cout<< a.name<<" "<< a.weight <<" "<< a.sugarLevel<<endl;


	// Liger l;
	// cout<< l.height <<" "<< l.Lion::weight << " "<< l.D::weight << " "<<l.size <<endl;
 
	// Math m;
	// m.s();

	// Physics p;
	// p.s();

    return 0;
}