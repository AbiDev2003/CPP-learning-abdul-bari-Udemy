#include <iostream>

using namespace std;

class Parent {
    //if final is decalred in parent class then child class cannot be created from parent class, so final is used to prevent inheritance
    virtual void show() final{
        //non virtual function cannot be overridden in derived class, so we have to declare it as virtual function in parent class to override it in child class
        //in java just syntax difference is there, final is declared before functon name
        
    }
};
class Child : Parent{
    // void show(){
    //     //now show cannot be overridden as it is declared as final in parent class
    
    // }
    
};

int main() {
    
    return 0;
}