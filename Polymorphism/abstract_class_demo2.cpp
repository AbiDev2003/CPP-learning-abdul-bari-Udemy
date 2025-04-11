#include <iostream>

using namespace std;

class Base {
    public:
    void fun1(){
        cout<<"fun 1 of base"<<endl;
    };
    virtual void fun2() = 0;  //this is a pure virtual functin or interface or abstract fucntion, so any derived class have to override it. If not, then derived class also becomes abstract class 
    
};
class derived : public Base {
    public:
    void fun2(){
        cout<<"fun 2 of derived"<<endl;
    };
    void fun1(){
        cout<<"fun 1 of derived"<<endl;
    };
};

int main() {
    derived d;
    Base *ptr = &d;
    ptr->fun1(); // Base class fun1 function will be called, as it is not overriding the base class fun1 function
    ptr->fun2(); // Base class fun2 function will be called, as it is not overriding the base class fun2 function
    
    return 0;
}