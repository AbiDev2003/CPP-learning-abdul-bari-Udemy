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
    // Rectangle r;  //this method creates an object in stack
    // Rectangle *p; //declaring pointer
    // p = &r; 
    // p -> length = 10;
    // p -> breadth = 5;
    // cout<<p->area()<<endl;
    // cout<<p->perimeter()<<endl;

 


// or another method 
    // p = new Rectangle;//new object is created
    Rectangle *p = new Rectangle(); //this method creates an object in heap
    p -> length = 10;
    p -> breadth = 5;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
    
    return 0;
}