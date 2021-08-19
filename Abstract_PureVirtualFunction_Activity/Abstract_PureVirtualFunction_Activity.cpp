//Olivia Walker

//pure Virtual Function & Abstract class

#include <iostream>
using namespace std;

class Base { //Declaring class 
public:
	virtual void show() = 0; //pure virtual function 
};
class Derv1 : public Base { //Derived class 
	public:
		void show() {
			cout << "\nDerived Class #1" << endl;
	}

};
class Derv2 : public Base { //Derived class 2
public:
	void show() {
		cout << "\nDerived Class #2" << endl;
	}
};
int main() {
	//Base ba; //Cannot make object from abstract class
	Base* arr[2]; //Array of pointers to base class
	Derv1 dv1;
	Derv2 dv2;
	arr[0] = &dv1;
	arr[1] = &dv1;
	arr[0] = &dv2;
	arr[1] = &dv2;
	arr[0]->show();
	arr[1]->show();
	return 0;
  
}