#include<bits/stdc++.h>

using namespace std;
#define ll long long

class Student{
public:
	int id;
	int age;
	string name;
	int nos;
	bool present;

    // this is the constructur of Student class instance
	Student(int _id, int _age, string _name, int _nos, bool _Present){
		id = _id;
		age = _age;
		name = _name;
		nos = _nos;
		present = _Present;
	}

	void study(){
		cout<<"Studying"<<endl;
	}
	
};

int main(){ 
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	// cout<<sizeof(Student)<<endl;
	// Student s1;
	// s1.name = "Saurabh";
	// s1.age = 21;
	// s1.id = 1;
	// s1.nos = 9;
	// s1.present = 1;


	// Student s2;
	// s2.name = "Tanmay";
	// s2.age = 20;
	// s2.id = 2;
	// s2.nos = 9;
	// s2.present = 1;

	Student s1(1, 21, "Saurbh", 9, true);
	cout<< "name: " << s1.name <<endl;
	cout<< "id: " << s1.id <<endl;
	cout<< "age: " << s1.age <<endl;
	cout<< "number of subjects: " << s1.nos <<endl;
	cout<< "Are u present: " <<s1.present <<endl;

    cout<<endl;

// Alocating on Heap
   	Student *s2 = new Student(2, 19, "Tanmay", 7, false);
   	cout<< "name: " << s2->name <<endl;
	cout<< "id: " << (*s2).id <<endl;
	cout<< "age: " << s2->age <<endl;

	delete s2;
    return 0;
}
