// this is the effect of inheitanece publicly, protetedly and privately

#include <iostream>

using namespace std;
class Parent{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void funParent(){
        a = 10;
        b = 20;
        c = 30;
    }
};

class Child: private Parent{
    private:

    protected:
    
    public:
    void funChild(){
        // a = 10; // Not allowed
        b = 20;
        c = 30;
    }
}; //when child class is inheriting publicly, all memebers are accessibke except private members of parent class

class GrandChild: public Child{
    public:
    void funGrantChild(){
        // a = 10;
        // b = 20;
        // c = 30;
    }
};

int main() {
    Child c;
    // c.a = 10;
    // c.b = 5;   // a and b can not be accessed because , private and protected
    
    // c.c = 20;  //this will be accessed because child class is accessing from parent class publicly, if it will access prottectedly this will show an errror
    return 0;
}