#include <iostream>

using namespace std;
class BasicCar {
    public:
    virtual 
    void start(){
        cout<<"basicCar started"<<endl;
    };
};
class AdvancedCar : public BasicCar {
    public:
    void start(){
        cout<<"AdvancedCar started"<<endl;
    };
};
int main() {
    BasicCar *p = new AdvancedCar();
    p -> start(); // AdvancedCar class start function will be called, as it is overriding the base class start function. When a base class function is declared as virtual, then the function call is not based on the pointer, but on the object being pointed to. This is called runtime polymorphism.

    return 0;
}