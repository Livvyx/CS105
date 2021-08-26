//Olivia Walker
//A simple exception handling example
#include <iostream>
using namespace std;

int main() {
	cout << "\n\t*******A Simple Exception Handling Example Output*******" << endl; //Creating output to state what the other outputs refer to
	cout << "\n\tStart" << endl;
	try { //Starting a try block - First Key Word
		cout << "\n\tInside Try Block" << endl;
		throw 100; //throwing an error - Second Key Word
		cout << "\n\tThis Will Not Execute" << endl;
	}
	catch (int i) { //catching an error - Third Key Word
		cout << "\n\tCaught An Exception -- The Value Is: ";
		cout << i << "\n";
	}
	cout << "\n\tEnd";
	return 0;
}
