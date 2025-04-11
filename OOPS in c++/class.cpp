#include <iostream>

using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    int area() {
        return length*breadth;
    }
    int perimeter() {
        return 2*(length + breadth);
    }
};

int main() {
    Rectangle r1, r2;
    r1.length = 10;
    r1.breadth= 12;

    r2.length = 5;
    r2.breadth = 10;
    cout<<"Area of r1 "<<r1.area()<<endl;
    cout<<"Area of r2 "<<r2.area()<<endl;

    cout<<"Perimeter of r1 "<<r1.perimeter()<<endl;
    cout<<"Area of r2 "<<r2.perimeter()<<endl;
    return 0;
}