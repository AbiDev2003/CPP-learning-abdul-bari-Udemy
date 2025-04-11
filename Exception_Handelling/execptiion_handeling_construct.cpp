#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 0, c;

    try{
        if(b == 0){
            throw 1;  //we can throw anything (1, 2, 3, 10 etc), any data type. it is just a throw, so that catch statement will catch something.
        }
        c = a/b;
        cout<<c;
    }
    catch(int e){
        cout<<"Division by zero not allowed "<<e<<endl;
    } //try and catch is like if and else. if try block is executed then catch block will not be executed. if try block is not executed then catch block will be executed.
    cout<<"Bye"<<endl;
    return 0;
}