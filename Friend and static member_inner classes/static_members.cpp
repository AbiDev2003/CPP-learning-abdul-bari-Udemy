#include <iostream>

using namespace std;

// static members - memory is created only once for each class and all the object of that class can share it. It must declared outside of the class using scope resolution. 

class Test{
    public:
    int a;
    static int count;  //static data member

    Test(){
        a = 10;
        count++;
    }

    static int getcount(){
        // a++;
        return count;
    }  //static member function

};
int Test::count = 0;

int main() {
    Test t1, t2;
    // cout<<t1.count<<endl;
    // cout<<t2.count<<endl;
    // t1.count = 25;
    // cout<<t2.count<<endl; //can be accessed using objects
    // cout<<Test::count<<endl; //can be accessed using class name too


    cout<<Test::getcount()<<endl;
    cout<<t1.getcount()<<endl;
    return 0;
}