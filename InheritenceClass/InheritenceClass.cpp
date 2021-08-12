//Olivia Wakjer
//Inheritence c++

/*
inheritence is a way of creating a new class by starting with an existing class 
and adding new members
*/

#include <iostream>
using namespace std;




//1. private member is not accessible anywhere else other than the same class
//2. public member is accessible in other classes including main function
//3. public class is accessible by the inherited classes
//4. protected member is accessible by the same class and inherited classes

//Parent class
class Parent { //declaring class called parent
    //Constructor
private: 
    int x;

protected:
    int a = 8;

public:
    void getDetails() {

    }
};

//class Child: private Parent {
//private:
//    int b;
//
//public:
//    void outDetails() {
//        getDetails();
//        a = 20; //protected member of the parent class can be accessed here withing the child class
//       // x = 3; //private in parent class, so cannot access even here
//    }
//};

//class Child :protected Parent {
//private:
//    int b;
//
//public:
//    void outDetails() {
//        getDetails();
//        a = 20;
//    }
//};

class Child : public Parent {
private:
    int b;

public:
    void outDetails() {
        getDetails();
        // a = 20;
    }
};

//Grandchild inherits from the child and parent class if they are public. Protected members are accessible in grandchild class. 
class Grandchild : public Child {
private:
    int d;
public:
    void someFunction() {
        // a = 6; 
        cout << "a = " << a;
    }
};

int main()
{
    Parent p; // p is the object of class Parent
    Child c;
    Grandchild g;
    //p.a = 10; // cannot access private member of the class 
    p.getDetails(); //can access the public member of the class

    //c.a = 5; //cannnot access the private member of the parent class
    //c.getDetails(); // cannot access the private or protected class's public member but it can access the public class's public member

    //g.d = 20;
    g.outDetails();//can access the outDetails() of the Child class which is the parent for Grandchild
    //g.getDetails();//can access the getDetails() of the Parent class which is the grandparent of Grandchild

    //p.outDetails();//cannot access the child class's member from parent
    //g.getDetails();// accessible by grandchild when the grandparent is declared public while inherited by the child class

    g.someFunction();
}