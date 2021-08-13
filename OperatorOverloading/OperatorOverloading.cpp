//Olivia Walker

//Operator overloading

#include <iostream>
using namespace std;

class Box { //initializing class called box
private: 
    double length; //length of a box
    double breadth; //breadth of a box
    double height; //height of a box
public:
    double getVolume(void) {
        return (length * breadth * height);
    }
    void setLength(double len) {
        length = len;
    }
    void setBreadth(double bre) {
        breadth = bre;

    }
    void setHeight(double hei) {
        height = hei;
    }
    //Overload + operator to add two box objects
    Box operator+(const Box& b){
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.breadth;
        return box;
    }
};
//Main function for the porgram
int main() {
    Box Box1; //Declaring box1 of type Box
    Box Box2; //Declaring box2 of type Box
    Box Box3; //Declaring box2 of a type Box

    Box1.setLength(10);
    Box1.setHeight(15);
    Box1.setBreadth(9);



    Box2.setLength(4);
    Box2.setHeight(5);
    Box2.setBreadth(6);



    Box3 = Box1 + Box2;



    cout << "\n\nThe volume for Box 1 is: " << Box1.getVolume() << "\n\n";
    cout << "\n\nThe volume for Box 2 is: " << Box2.getVolume() << "\n\n";
    cout << "\n\nThe volume for Box 3 is: " << Box3.getVolume() << "\n\n";



}