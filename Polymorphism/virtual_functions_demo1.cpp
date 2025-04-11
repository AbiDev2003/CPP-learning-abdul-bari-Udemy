#include <iostream>

using namespace std;
class Base {
    public:
    virtual void fun(){
        cout<<"fun  of base"<<endl;
    };
    
};

class Derived : public Base {
    public:
    void fun(){
        cout<<"fun of derived"<<endl;
    };    
};

int main() {
    Derived d;
    Base *ptr = &d;
    ptr->fun(); // Derived class fun function will be called, as it is overriding the base class fun function. Whena base class function is declared as virtual, then the function call is not based on the pointer, but on the object being pointed to. This is called runtime polymorphism.
    return 0;
}