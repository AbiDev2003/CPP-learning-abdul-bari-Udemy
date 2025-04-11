#include <iostream>

using namespace std;

// class Test{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     friend void fun();  //this is an example of friend function
// };

// void fun(){
//     Test t;
//     // it can not access a, and b without using friend function. So declare fun() as friend in Test class. 
//     t.a = 15;
//     t.b = 10;
//     t.c = 5;
// }




// example 2

class your;
class My{
    private:
    int a = 10;
    protected:
    int b;
    public:
    int c;
    friend your;  //this is an example of friend class
};
class your{
    public:
    My m;
    void fun(){
        cout<<"m.a"<<endl;
        cout<<"m.b"<<endl;
        cout<<"m.c"<<endl;
    }
};

