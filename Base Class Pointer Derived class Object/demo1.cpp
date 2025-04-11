#include <iostream>

using namespace std;
class Base {
    public:
    void fun1(){
        cout<<"fun 1 of base"<<endl;
    };
    
};

class Derived : public Base {
    public:
    void fun2(){
        cout<<"fun 2 of derived"<<endl;
    };
    // void fun5();
};

int main() {
    // Derived d;
    // // d.fun1();
    // // d.fun2();

    //Now lets see Base class pointer and derivd class object
    // Base *ptr = &d;
    // ptr->fun1();
    // // ptr->fun2(); // error will show because fun2 is not present in base class, that means base class pointer can't access the derived class function

    // lets see is it possible in other way, i.e derived class pointer can access the base class function (Derived class pointer and base class object)
    Base b;
    Derived *ptr = (Derived *)&b;
    ptr->fun1();
    ptr->fun2(); // this will also work, but it is not a good practice to do this, because it is not safe, it may cause error in future
    return 0;
}