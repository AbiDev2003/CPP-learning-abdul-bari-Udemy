#include <iostream>

using namespace std;

struct Demo
{

    // in c++ structure is more like a class, so sometimes you cam use structure instead of class also
    // In c++ struct have both data members(variables ) and member fucntions as well. 
    // the difference is in struct everything is public by default and in class everything is private by default. 
    
    int x;
    int y;

    void display(){
        cout<<x<<" "<<y<<endl;
    }
};


int main() {
    Demo d;
    d.x = 10;
    d.y = 20;
    d.display();
    return 0;
}