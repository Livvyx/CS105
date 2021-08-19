//Olivia Walker
//VirtualFunction exercise

#include <iostream>
using namespace std;
class Media {
protected:
	string title;
	float price;
public:
	Media(string s, float a) {
		title = s;
		price = a;
	}
		
	virtual void display() {

	}
};
class Book : public Media {
private:
	int pages;
public:

	Book(string s, float a, int p) : Media(s, a) {
		pages = p;
	}
	void display() {
		cout << "\n Title: " << title;
		cout << "\n Pages: " << pages;
		cout << "\n Price: " << price;
	}
};
class Tape : public Media {
private:
	float time;
public:
	Tape(string s, float a, float t) : Media(s, a) {
		time = t;
	}
	void display() {
		cout << "\n Title: " << title;
		cout << "\n Play Time: " << time << "Mins";
		cout << "\n Price(USD): " << price;
	}
};
int main(){
	string title;
	float price, time;
	int pages;

	//Enter book details / Entering the output & input for the user
	cout << "\n ********* WELCOME TO THE BOOKSHOP *********" << endl;

	cout << "\n********* Please Enter Book Details: *********" << endl;

	cout << "\n Please Enter The Title: ";
	cin >> title;

	cout << "\n Please Enter The Price(NZD): ";
	cin >> price;

	cout << "\n Please Enter The Amount Of Pages: ";
	cin >> pages;
	Book b1(title, price, pages); //Accessing the class book for users data that has been input

	//Enter tape details / Entering the output & input for the user
	cout << "\n********* Please Enter Tape Details *********" << endl;

	cout << "\n Please Enter The Title: ";
	cin >> title;
	//cin.get(title,30);

	cout << "\n Please Enter The Price(NZD): ";
	cin >> price;

	cout << "\n Please Enter The PlayTime(Mins): ";
	cin >> time;

	Tape t1(title, price, time);//Accessing the class tape for users data that has been input

	Media* list[2];
	list[0] = &b1;
	list[1] = &t1;

	//outputting the Media details
	cout << "\n ********* Media Details: *********" << endl;
	list[0]->display(); //Accessing the class book for users data that has been input to display
	list[1]->display(); //Accessing the class tape for users data that has been input to be displayed
	return 0;




}


