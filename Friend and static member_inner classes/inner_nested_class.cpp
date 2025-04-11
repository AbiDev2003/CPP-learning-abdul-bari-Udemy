#include <iostream>

using namespace std;

// one class inside another class, so that it will be used inside only that class. inner class can access static members of outer class. So it is just like an outside class, but we are defining it inside a class. 
class Outer{
    class Inner{
        public:
        void display(){
            cout<<"dispplay of inner"<<endl;
        }
    };

    public:
    void fun(){
        i.display();
    }

    Inner i;
};

int main() {
    // Outer::Inner i;

    return 0;
}