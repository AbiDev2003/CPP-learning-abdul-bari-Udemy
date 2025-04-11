#include <iostream>
#include <iomanip> //for manipulators

using namespace std;

int main() {
    // The following code snippet demonstrates the use of manipulators in C++.
    // Manipulators are used to format the output of the program.
    // In this example, the setw() manipulator is used to set the width of the output field.
    // The setprecision() manipulator is used to set the precision of the output.
    // The fixed manipulator is used to display the floating-point numbers in fixed-point notation.
    // The showpoint manipulator is used to display the decimal point and trailing zeros for floating-point numbers.
    // The left and right manipulators are used to align the output to the left and right, respectively.
    // The setfill() manipulator is used to fill the empty spaces in the output with a specified character.
    // The endl manipulator is used to insert a newline character in the output.
    // The hex, oct, and dec manipulators are used to display the numbers in hexadecimal, octal, and decimal formats, respectively.
    // The boolalpha manipulator is used to display the boolean values as true or false.
    // The showbase manipulator is used to display the base of the number (0x for hexadecimal, 0 for octal).
    // The uppercase manipulator is used to display the alphabetic characters in uppercase.
    // The nouppercase manipulator is used to display the alphabetic characters in lowercase.

    int num = 123;
    double pi = 3.14159;
    bool flag = true;
    cout<<hex<<163; //output: a3, because 163 in hexadecimal is a3
    cout<<endl;
    cout<<oct<<163; //output: 243, because 163 in octal is 243
    cout<<"\n";
    cout<<setprecision(4)<<pi<<endl; //setprecison and width of floating point numbers
    cout<<setw(10)<<"Hello"<<endl; //set width of string
    cout<<10 <<" "<< 20<<endl;
    return 0;
}