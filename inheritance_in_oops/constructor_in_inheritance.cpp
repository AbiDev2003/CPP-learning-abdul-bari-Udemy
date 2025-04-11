#include <iostream>

using namespace std;

class Base{
    public:
    Base(){
        cout<<"non parameterized base"<<endl;
    }
    Base(int x){
        cout<<"parameterized base "<<x<<endl;
    }
};

class Derived: public Base{
    public:
    Derived(){
        cout<<"non parameterized derived"<<endl;
    }
    Derived(int y){
        cout<<"parameterized derived "<<y<<endl;
    }
    Derived(int x, int y):Base(x){
        cout<<"Parameterized derived "<<y<<endl; 
    }
};

int main() {
    // Derived d;
    // Derived d(10);
    Derived d(10, 5);
    return 0;
}