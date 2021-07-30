//Olivia Walker
//Animal - Dog - Cat class: Inheritance

/*
1. Create a parent class called Animal and store common properties of animals by taking input from the user.
2. Create a child class called Dog and store specific dog properties by taking input from the user.
3. Create a child class called Cat and store specific cat properties by taking input from the user.
 
In the main, ask the user if they want to get dog's information or cat's information and produce the animal properties and the properties of their choice (like dog or cat) .
*/

/*Incompleted*/
#include <iostream>
using namespace std;

class Animal {
public:

    string animal;
    string breed;
    string name;
    string age;
    string weight;
    string size;

    void getData() {
        cout << "Please Enter A Animal: ";
        cin >> animal;
        cout << "Please Enter A Breed: ";
        cin >> breed;
        cout << "please Enter A Age: ";

    }
    
    
};
class Dog: public Animal {
private: 
    string dog;
    string lifespan;
    string diet;

    void dogInput() {

        cout << "Hello! Welcome To Doggy Central" << endl;
        cout << "**************************************" << endl;
        cout << "Please Enter a dog breed: ";
        cin >> breed;
        cout << "Please Enter a dog age(puppy, adult or elderly): ";
        cin >> age;



    }

};
int main()
{
    
}


