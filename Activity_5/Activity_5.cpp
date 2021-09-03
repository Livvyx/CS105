//Activity Revision 5

//Olivia Walker

#include <iostream>
using namespace std;

class Adding { //created a class called addd
public: //created a public access specifier
    int addProduct(int num1, int num2) { //creating a integer function called "addProduct" & a parameters with num1 & 2
        return num1 + num2; //returning 
    }
};

class Product { //creating a derived class called product
public: //creating a public access specifier
    int num1, num2; //declaring int nums

    void sumOfProduct() { //creating a function called "sumOfProduct"
        do { //creating a do statement
            cout << "Enter first number: "; //creating a output for the user
            cin >> num1; //creating a input for the user
            if (num1 >= 1 && num1 <= 1000000) //creating a if statement in the do/while
                break; //breaking
        } while (true); 
        do {
            cout << "Enter second number: "; //creating output for the user
            cin >> num2; //creating input for the user
            if (num2 >= 1 && num2 <= 1000000) //creating a if statement
                break;
        } while (true);

    }
};

class showBlingBling : private Product, Adding { //creating a derived class called "showBlingBling
    
    Product p; //creating a object with the derived class "product"
    Adding a; //creating a object with the base class "adding"
public:
    void display() { //creating a display function
        p.sumOfProduct(); //calling the function "sumOfProduct" from the derived class "Product"
        cout << "The sum of the product " << p.num1 << ", " << p.num2 << " is : " << a.addProduct(p.num1, p.num2); //Creating a output for the user
    }
};


int main()
{
    showBlingBling s; //creating a object with the derived class "showBlingBling"
    int num; //declaring num as a integer

    do { //creating a do statement
        cout << "How many times do you want to run the program Ma'am/Sir? "; //creating a output for the user
        cin >> num; //creating a input
        if (num >= 1 && num <= 10) //creating a if statement
            break; //breaking
    } while (true);

    int i = 0; //declaring a integer "i"
    while (i < num) { //creating a while statement
        s.display(); //calling display function from the derived class "showBlingBling"
        i++; 
    }
}
