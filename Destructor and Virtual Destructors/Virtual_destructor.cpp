#include <iostream>

using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base created"<<endl;
    }
    virtual ~Base(){
        cout<<"Base destroyed"<<endl;
    } //if we do not use virtual keyword, then derived class destructor will not be called. So we are using virtual to avoid resource leak.
};
class Derived: public Base{
    public:
    Derived(){
        cout<<"Derived created"<<endl;
    }
    ~Derived(){
        cout<<"Derived destroyed"<<endl;
    }
};

int main() {
    // Derived d ; //Destructor will be called opposite to the order of constructor.

    // now we will use base clas pointer to derived class object.
    Base *p = new Derived(); //Derived class object created dynamically, so destructor will not be called automatically. We have to delete it manually. Otherwise it will cause memory leak.
    // now derived class destructor will not be called, because compiler will not know that it is derived class object. So, we have to make base class destructor virtual.
    delete p;
    return 0;
}