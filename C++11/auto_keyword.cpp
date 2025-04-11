#include <iostream>

using namespace std;

float fun(){
    return 2.33f; //2.33f is a float literal, means it is a float type
}

int main() {
    // double d = 12.3;
    // int i = 9;
    // auto a = d + i; // a is deduced to double
    // cout<<a<<endl;

    // auto x = fun();
    // cout<<x<<endl; // x is deduced to float

    int x = 10;
    float y = 90.5;
    decltype(y) z = 12.3;
    cout<<z<<endl; // z is deduced to float

    return 0;
}