#include <iostream>

using namespace std;

int main() {
    int a = 1; //this is a common method to declare variable, but we can delcare like below methods as well

    int a = (1);
    int a = {1}; //this is also a valid way to declare variable, but this is not recommended in C++11 and above, because it can cause narrowing conversion problem. for example if we declare int a = {1.5}; then it will give error, because 1.5 is not a valid integer value.
    
    int a(1); //this is also a valid way to declare variable, but this is not recommended in C++11 and above, because it can cause narrowing conversion problem. for example if we declare int a(1.5); then it will give error, because 1.5 is not a valid integer value.
    int a{1}; //this is also a valid way to declare variable, but this is not recommended in C++11 and above, because it can cause narrowing conversion problem. for example if we declare int a{1.5}; then it will give error, because 1.5 is not a valid integer value.

    int a = 10; //decimal number
    int a = 010; //octal nmber, this will be converted to decimal number 8, because 8 is not a valid octal number.
    int a = 0x10; //hexadecimal number, this will be converted to decimal number 16, because 0x is used to represent hexadecimal number.
    //the above type of literals can be used for int, short, long, long long, char, float, double and long double data types.

    long distance = 6789L; //long integer literal, L is used to represent long integer literal.






    //now we will give examples of float literals
    float price = 12.5; //by default float literals are double, so we have to use f or F to represent float literals.
    float price = 12.5f; //float literal, f is used to represent float literal.
    float price = 12.5F; //float literal, F is used to represent float literal.

    float cost = 1.72e4f;

    double weight = 2.53e7L;



    //now we will give examples of char literals
    char section = 'A';
    char section = 65;
    
    
    
    
    //now we will give examples of boolean literals
    bool isTrue = true; //true is a boolean literal, it can be used in if condition as well.
    bool b = 1;




    //now we will give examples of string literals
    string name = "John Doe"; //string literal, this is a string object, not a char array.
    

    return 0;
}