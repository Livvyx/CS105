
//Olivia Walker
//CS105 C++

//Example for class function


#include <iostream>
using namespace std;

//Defining Class
class Animal {
//Access specifier - public can be accessed outside the class
public:
//Data members
	string animalType;
	string Category;

//member function
	void inputDetails() {
		cout << "Please input the animal type: ";
		cin >> animalType;
		cout << "Enter the animal category: ";
		cin >> Category;
	}
	void displayDetails() {
		cout << "The animal type is : " << animalType << endl;
	}
	void categoryDetails() {
		cout << "The Category type is : " << Category << endl;
	}
	

};

int main()
{
	//Animal animObj; // animObj is the instance of class Animal
	//animObj.animalType = "Wild"; // Assigning value to data member of class Animal
	//animObj.displayDetails(); // Calling member function of class Animal

	Animal animObj, dogObj; 
	animObj.inputDetails(); 
	animObj.displayDetails();

	//dog object details
	dogObj.inputDetails();
	dogObj.displayDetails();


	Animal Cat;
	Cat.Category = "Carnivores";
	Cat.categoryDetails();
}


