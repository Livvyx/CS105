
//Olivia Walker
/*
1. Write a class definition that creates a class called Tesla with one private data member, 
Model, of type char and one public function whose declaration is void year().
2. Now write a statement that defines object called t1 of the Tesla class mentioned in Q1.
*/

#include <iostream>
using namespace std;

class Tesla {

private: // access specifier
    char model;//Data Member
public: //access specifier
    void year() {

        cout << "Year 2020" << endl; //output


    }
    char getModel(){ 

        cout << "Please Enter a Model: ";
        cin >> model;
        return model;


    }




};

int main()
{
    Tesla teslaObj; //Tesla object
    teslaObj.year();
}


