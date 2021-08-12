
//Olivia Walker
//CS105 
//Writing  a class for student

#include <iostream>
using namespace std;

//Class Student
class Student {
	//access specifier
private: //can be used within the ' class '
	int id;
	string name;
	int lab1, lab2;
	int average;
public:
	//constructor (used to initialize datamembers/values)
	/*default constructor is created during the implementation of the program
	if we dont define it. default constructor has no parameter.*/
	Student(int i = 101, string n = "Olivia", int lab1 = 5, int lab2 = 4, int average = 0) {

		id = i;
		name = n;

	}
	//member input function
	void inputStudent() {
		
		cout << "\nPlease enter your name: ";
		cin >> name;
		cout << endl;
		cout << "please enter your id: ";
		cin >> id;
		cout << endl;
		cout << "please enter your lab1 grade: ";
		cin >> lab1;
		cout << endl;
		cout << "please enter your lab2 grade: ";
		cin >> lab2;
		cout << endl;

		
	}
	void averageLabs(){

		average = ((lab1 + lab2) / 2);
	}
	//member function
	void outputStudent() {

		cout << "********************************************" << endl;
		cout << name << "'s" << " student id: " << id << endl;
		cout << "Your average: " << average << endl;
		/*cout << "\nId: " << id << " " << "Name: " << name;*/
	}
};

int main()
{
	cout << "\n<-Enter Your Information Below->" << endl;
	Student studObj[3]; //student object studObj is of Student class
	
	/*studObj.id = 101;
	studObj.name = "Olivia";
	cout << "Your student id: " << studObj.id;
	cout << "\nName: " << studObj.name;*/

	//calling the First member function

	/*cout << "\n";
	Student s1(105, "Samuel");
	s1.outputStudent();

	Student s2(113, "Larissa");
	s2.outputStudent();

	Student s3(128, "Ashlee");
	s3.outputStudent();*/

	Student s;
	for (int i = 0; i < 3; i++) {
		s.inputStudent();
		s.averageLabs();
		s.outputStudent();
	}

	/*Student p();
	p.inputStudent();*/

	

	

}


