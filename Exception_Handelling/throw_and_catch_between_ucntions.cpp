#include <iostream>

using namespace std;

int division(int x, int y); // Function declaration

int main() {
    int a = 10, b = 0, c;

    try {
        c = division(a, b);
        cout << c;
    }
    catch (int e) {
        cout << "Division by zero. Error code: " << e << endl;
    } // try and catch is like if and else. if try block is executed then catch block will not be executed. if try block is not executed then catch block will be executed.

    return 0;
}

int division(int x, int y) {
    if (y == 0) {
        throw 1;
    }
    return x / y;
}