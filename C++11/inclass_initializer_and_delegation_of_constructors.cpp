#include <iostream>

using namespace std;


// Delegation of constructors in C++ means one constructor calls another constructor in the same class to reuse its initialization logic. This helps avoid code duplication and makes the code cleaner.
class Test{
    int x = 10;
    int y = 13;
    public:
    Test(int a, int b){
        x = a;
        y = b;
    }
    Test():Test(1, 1){}
};

int main() {
    
    return 0;
}