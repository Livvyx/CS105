
//Olivia Walker

//Virtual function 
#include <iostream>
using namespace std;
class Base {
public:
    virtual void print() { 
        cout << "Base Function" << endl;
    }
};
class Derived : public Base {
public:
    void print() {
        cout << "Derived Function" << endl;
    }
};
int main(){
    Derived derived1;

    //Pointer of base & derived type that points to derived1
    Base* b1 = &derived1;
    Derived* d1 = &derived1;

    //Calls member function of derived class
    b1->print();
    d1->print();

    return 0;
}

