//Olivia Walker

//Virtual Functions Shape Exercise

#include <iostream>
using namespace std;
class Shape{
public:
    void draw(){ //without virtual keyword {
        cout << "Shape" << endl;
    }

};
class Triangle :public Shape{
public:
    void draw() {
        cout << "Draw Triangle" << endl;
    }
};
class Circle :public Shape{
public:
    void draw()
    {
        cout << "Draw Circle" << endl;
    }
};
class Square :public Shape
{
public:
    void draw(){
        cout << "Draw Square" << endl;
    }
};
class Pentagon :public Shape{
public:
    void draw(){
        cout << "Draw Pentagon" << endl;
    }
};
class Line :public Shape{
public:
    void draw(){
        cout << "Draw Line" << endl;
    }
};

int main(){
    Triangle t1; //Declaring triangle as a object called t1
    Circle c1;  //Declaring circle as a object called c1
    Square s1;  //Declaring square as a object called s1
    Pentagon p1;    //Declaring pentagon as a object called p1
    Line l1;    //Declaring line as a object called l1

    Shape* ptr[5] = { &t1,&c1,&s1,&p1,&l1 }; // Pointer array
    for (int j = 0; j < 5; j++)
        ptr[j]->draw();


    return 0;
}

