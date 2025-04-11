#include <iostream>

using namespace std;

class MyException:public exception{
    // public:
    // char * what(){
    //     return "My Exception";
    // }  //what() is a function of exception class. we are overriding it here.

};

int division(int a, int b) throw(MyException){
    // Function declaration by writing throw(MyException) we are telling the compiler that this function may throw MyException which is extra and not mandatory. throw() means this function will not throw any exception. 
    if(b ==0){
        throw MyException();  //even we can throw an exception of a class, just like thrwing integer, string etc. 
    }
    return a/b;
}

int main() {
    int x = 10, y = 0, z;
    
    try{
        z = division(x, y);
    }
    catch(MyException e){
        cout<<"Division by zero"<<endl;
    }
    cout<<"Bye"<<endl;
    return 0;
}