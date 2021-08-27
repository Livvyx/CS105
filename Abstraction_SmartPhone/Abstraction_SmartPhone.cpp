//Olivia Walker 
//  

#include <iostream>
using namespace std;

class Smartphone { //This is now a virtual class
public:
   virtual void TakeSelfie() = 0; //Pure Virtual Function - will not be implemented in this class
   virtual void MakeCall() = 0; //Pure Virtual Function - will not be implemented in this class
};
class Android : public Smartphone { 
public:
    void TakeSelfie() {
        cout << "Android Selfie\n";
    }; //Implented Function 
    void MakeCall() {
        cout << "\nAndroid Calling" << endl;
    }

};
class Iphone : public Smartphone {
public:
    void TakeSelfie() {
        cout << "\n - Iphone Taking Selfie.." << endl;
    }; //Implented Function 
    void MakeCall() { //Implenting Pure Virtual Function from smartphone class
        cout << "\n - Iphone Calling..." << endl;
    }

};

   

int main(){
    Smartphone* s1 = new Iphone(); //Base Class pointer of derived class
    s1->TakeSelfie(); //Accessing Members of a class
    s1->MakeCall();
    system("pause>0");
}

