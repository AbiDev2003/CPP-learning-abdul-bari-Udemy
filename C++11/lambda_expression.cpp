#include <iostream>

using namespace std;

template<typename T>
void fun(T p){
    p();
}

int main() {
    //lambda expression is an anonymous(unnamed) function, which can be used to create a function object
    // [](){
    //     cout<<"Hello"<<endl;
    // }();
    

    //we can also pass arguments, to the anoymous function
    // [](int x, int y){
    //     cout<<"sum is "<< x + y <<endl;
    // }(10, 30);


    //we can also return value from the anonymous function
    // cout<<(
    //     [](int x, int y){
    //         return x + y;
    //     }(10, 30)
    // )<<endl;

    // int a = [](int x, int y){
    //     return x + y;
    // }(10, 30);
    // cout<<a<<endl;



    int a = 10;
    // [a](){
    //     cout<<a<<endl;
    // }();

    // insted of calling the above function we can asign it to some variable f
    // auto f = [a](){
    //     cout<<a<<endl;
    // };
    // f(); //calling the function using variable f
    // a++; //this will not change the value to 11, to do that we have to provide reference to the variable a
    // f(); //calling the function using variable f
    


    auto f = [&a](){
        cout<<a<<endl;
    };
    // f(); //calling the function using variable f
    // a++; 
    // f(); //calling the function using variable f

    fun(f);
    return 0;
}