#include <iostream>

using namespace std;

class Base{
    //length, breadth infos
    public:
    int a;
    void display(){
        cout<<"Display of base "<<a<<endl;
    }
};

class Derived: public Base{
    //area info
    public:
    void show(){
        cout<<"Show of derived"<<endl;
    } 
};


int main() {
    Derived d;
    d.a = 100;
    d.display();
    d.show();
    return 0;
}