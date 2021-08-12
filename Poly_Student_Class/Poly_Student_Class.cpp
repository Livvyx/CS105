//Olivia Walker
//Polymorphism student class exercise

#include <iostream>
using namespace std;

class Student {
private:
	int id;
	string name;
public:
	void getidName(string i, int n) {
		name = i;
		id = n;
		cout << "Hello " << name << endl;
		cout << "\nYour Id is: " << id << endl;
	}
	void getMarks(float sem1, float sem2) {
		cout << "\nYour Current Marks for semester 1 are: " << sem1 << "%" <<  endl;
		cout << "\nYour Current Marks for semester 2 are: " << sem2 << "%" << endl;
	}
};
class SoftwareEngineering {
private:
	float lab1;
	float lab2;
	float lab3;
	float lab4;
public:
	void getMarks(float l1, float l2, float l3, float l4) {
		lab1 = l1;
		lab2 = l2;
		lab3 = l3;
		lab4 = l4;
		cout << "the calculated value for your marks are : " << (lab1 + lab2 + lab3 + lab4) / 4;
		
	}
};
int main()
{
	Student s;
	SoftwareEngineering se;

	s.getidName("Olivia", 657);
	s.getMarks(95.00, 78.00);
	se.getMarks(95, 90, 87, 75);



}


