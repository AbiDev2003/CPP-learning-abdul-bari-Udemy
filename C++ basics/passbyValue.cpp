#include <iostream>

using namespace std;

void swap(int a, int b){
    // a and b are formal parameter 
    int temp;
    a =b;
    b = temp;
}  //values will not get changed, because x, and y values are getting copied, not the actual value is moving to swap function. Ths is called call by value.

int main() {
    int x=10, y=20;  //actuall parameter
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}