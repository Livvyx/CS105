//olivia walker
//Create a class called employee

/*Incompleted*/
#include <iostream> //including iostream
using namespace std; 

class Employee { //declaring a class called employee
protected:
    int id; //declaring integer
    string name; //declaring name
public:
    void getData() { //creating a member function called get data 
        cout << "Please Enter Your Name: "; 
        cin >> name; //input for string name
        cout << "Please Enter Your ID: ";
        cin >> id; //input for integer id
    }

};

class Wages: private Employee { // declaring class called wages and accessing the class employee
private:
    float hoursWorked; //declaring hours worked with float
    float ratePerHour;
    
public:
    void calcWages() {  //creating a member function called calcWages
        getData();
        //ratePerHour* hoursWorked; //Multiplying the wages (hoursworked & ratePerHour)

        hoursWorked = 40;
        ratePerHour = 31;
        hoursWorked* ratePerHour; //calculating output for the user

        cout << "********************************************" << endl;
        cout << "Hello " << name << endl;
        cout << "Your ID: " << id << endl;
        cout << "Current Hours Worked: " << hoursWorked << endl; //outputting the hours for the user
        cout << "Your Rate: " << ratePerHour << endl; //outputting the rate for the user
    }


};
class Salary : private Employee {
private:
    float grossPay;
    float Tax;
    float Net;
public:
    void calcSalary() {
       /* getData();*/
        /*calcWages();*/
        cout << "Hello " << name << endl;
        cout << "Your ID is: " << id << endl;
        cout << "You Were Taxed 15%, So Your Current Gross is : " << (20 * 1240) / 100;


    }
};

int main()
{
    Employee empObj; //employee object is of he class employee
    Wages wageObj;
    Salary salaryObj;
    cout << "Employement Incorporation" << endl;
    cout << "********************************************" << endl;
  
   
    wageObj.calcWages(); //Calling(accessing) the class and function
    salaryObj.calcSalary();
}


