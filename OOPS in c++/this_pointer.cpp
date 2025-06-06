#include <iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }

};

int main() {
    Rectangle r1(10,5);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    return 0;
}