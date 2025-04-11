// Key Points:
// 1. Cannot Instantiate: You cannot create objects of an abstract class.
// 2. Pure Virtual Function: A function declared with = 0 in the base class, indicating that derived classes must provide an implementation for this function.
// 3. Base Class: Abstract classes are meant to be inherited by other classes, which then provide implementations for the pure virtual functions.

#include <iostream>

using namespace std;
class Car{
    public:
    virtual void start() = 0; // Pure virtual function, so any derived class have to override it. If not, then derived class also becomes abstract class
};
class innova : public Car{
    public:
    void start(){
        cout<<"Innova started"<<endl;
    };
};
class swift : public Car{
    public:
    void start(){
        cout<<"Swift started"<<endl;
    };
};
int main() {
    // Car c; // Error: Cannot instantiate abstract class
    // innova is a concrete class, becuase it is overriding the pure virtual function of base class, simlilkarly swift is also concrete class
    Car *p = new innova();
    p->start(); // Innova class start function will be called, as it is overriding the base class start function
    p = new swift();
    p->start(); // Swift class start function will be called, as it is overriding the base class start function
    
    return 0;
}