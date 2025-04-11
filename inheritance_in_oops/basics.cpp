#include <iostream>

using namespace std;
class Base{
    public:
    int x;
    void show(){
        cout<<x<<endl;
    }
};  //this is the parent or base class, having only x and show()

class Derived : public Base{
    public:
    int y;
    void display(){
        cout<<y<<endl;
    }
}; //this is the child or derived class, so object of derived class has x, y, show(), display()

int main() {
    Base b;
    b.x = 25;
    b.show();
    Derived d;
    d.y = 5;
    d.show();
    d.display();
    return 0;
}