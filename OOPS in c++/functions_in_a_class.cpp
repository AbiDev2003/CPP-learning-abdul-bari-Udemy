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

    int area();  //facilitators
    int perimeter(); //facilitators

    bool isSquare(); //enquary

    ~Rectangle(); //destructor
};

int main() {
    
    return 0;
}