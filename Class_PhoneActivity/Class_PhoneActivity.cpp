
//Olivia Walker
//Class Coding HomeWork
//CS105


#include <iostream> //To use ios function
using namespace std; //To use its class without calling it

class Phone { //declaring a class called Phone
public: //Public access modifier to make it publicly accessible
    float cost; // declaring a variable for a double data type
    int slots; // declaring a integer
};

int main()
{
    Phone Y6; //Creating a instantation (Creating a phone object called "Y6")
    Phone Y7;

    Y6.cost = 100.00; // Setting the value of the object to 100.00
    Y6.slots = 2; // setting the value of the object to 2

    Y7.cost = 100.00; 
    Y7.slots = 2;

    cout << "\nY6 Cost: " << Y6.cost << endl; // Printing out the cost for Y6
    cout << "\nY7 Cost: " << Y7.cost << endl; // Printing out the cost for Y7

    cout << "\nY6 Number of Slots: " << Y6.slots << endl; // Printing out the slots for Y6
    cout << "\nY7 Number of slots: " << Y7.slots << endl; // Printing out the slots for Y7

}



