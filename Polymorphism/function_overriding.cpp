#include <iostream>

using namespace std;
class Parent{
    public:
    void display(){
        cout<<"Parent display"<<endl;
    }
};
class Child : public Parent{
    public:
    void display(){
        cout<<"Child display"<<endl;
    }
};
int main() {
    Parent p;
    p.display();

    Child c;
    c.display();  // Child class display function will be called, as it is overriding the parent class display function
    return 0;
}