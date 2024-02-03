#include<bits/stdc++.h>

using namespace std;
#define ll long long

class Animal{
public:

	void speak(){
		cout<<"Speaking"<<endl;
	}
	Animal(){
		cout<<"inside Animal constructor "<<endl;
	}
};

class Dog: public Animal{
public:
	// Function Override
	void speak(){
		cout<<"Barking"<<endl;
	}
	Dog(){
		cout<<"inside Dog constructor "<<endl;
	}

};

int main(){ 
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	// Dog a1;
	// a1.speak();

	// Animal *a = new Animal();
	// a->speak();

	// Dog *a = new Dog();
	// a->speak();



  // In below, when we create parent class pointer into the child clas then 
  // the situation is called Upcasting

	// Animal *a = new Dog();
	// a->speak();  // it gives speaking

 // to run the child class we can use virtual keyword in ftont of parent class function

 

    // Downcasting

	// Dog *b = (Dog* )new Animal();
	// b->speak();


	// Animal *a = new Animal();

	Animal *a = new Dog();

	// Dog *a = new Dog();

	// Dog *a = (Dog *)new Animal();


    return 0;
}