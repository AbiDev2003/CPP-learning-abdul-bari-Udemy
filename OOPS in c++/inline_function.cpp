#include <iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(); //default constructor
    Rectangle(int l, int b);  //parameterized constructor
    Rectangle(Rectangle &r);  //copy constructor

    void setLength(int l); //mutator
    void setBreadth(int b); //mutator
    int getLength(); //accesor
    int getBreadth(); //accesor

    //here area function will be inline function, because when we write the function inside the class, it becomes a part of main() function
    int area(){
        return length*breadth;
        cout<<"it is inline"<<endl;
    };
    int Perimeter(); //we dont want perimeter() to be inline, so we write the function definition outside of the class using scope resolution operator
};


int Rectangle::Perimeter(){
    return 2*(length+breadth);
    cout<<"it is not inline"<<endl;
}
int main() {
    Rectangle r1(10, 5);
    cout<<r1.area();
    cout<<r1.Perimeter();
    return 0;
}