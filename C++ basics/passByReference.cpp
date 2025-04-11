#include <iostream>

using namespace std;

void swap(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
} //pass by reference does not crete the difference machine code, actually it is a part of main function machine code. So this is a inline function

int main() {
    int x =10, y = 20;
    swap(x, y); 
    cout<<x<<" "<<y<<endl;    
    return 0;
}