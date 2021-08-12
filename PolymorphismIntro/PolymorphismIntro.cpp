
//olivia Walker

//Polymorphism examples & introduction

#include <iostream>
using namespace std;

//base class, superclass or parent class
class Employee { //declaring a class called employee
public: 

    void amount() { //member function

        cout << "\nThe amount is : "; //creating a output
    }
    void amount(int x, int y) { //passing 2 parameters of integer type x & y
        cout << "\n The Calculated Value is = " << x * y; // multiplying the given parameters for output
     }

    void amount(float a, float b, string name) { //member function with parameters
        cout << "\n The Calculated Value for " << name << " is: " << a * b; //outputting a calculated value using multiplication with the parameters
    }

};

//derived class, sub class, or child class
class Wages : public Employee { //declared class called wages & accessing employee class
private : //access specifier declared as private
    float hours = 30; //declaring hours as a float, and intialized as 30
    float rate = 20; //declaring rate as a float, and initialized as 20
    float amt = 0; //declaring amt as a float
public: //access specifier declared as public
    void amount() { //declaring a member function called amount
        amt = hours * rate; // calculating amount by multiplying hours & rate
        cout << "\nThe amount is : " << amt; //outputting amt
    }
};

//derived class, sub class, or child class
class Salary : public Employee {
private:
    float gross = 2000;
    float tax = 400;
    float net;
public:
    void amount() {
        net = gross - tax;
        cout << "\nThe amount is: " << net;
    }


};
int main()
{
    
    Employee e; //declaring an object to the class employee
    Wages w;
    Salary s;
     cout << " *****************POLYMORPHISM*****************" << endl; //Making it look pretty :)
    cout << "\n**********************************************" << endl; //decorating
     e.amount(); //calling Employee class the member function called amount
     cout << "\n**********************************************" << endl;//decorating
     w.amount(); //calling the function within wage class
     cout << "\n**********************************************" << endl;//decorating
     s.amount(); //calling the function within salary class
     cout << "\n**********************************************" << endl;//decorating
     e.amount(40, 40); //calling the employee class within the member function called amount With parameters
     cout << "\n**********************************************" << endl;//decorating
     e.amount(37.5, 19.5, "james"); //calling function with parameters within employee class
     cout << "\n**********************************************" << endl;//decorating
}

