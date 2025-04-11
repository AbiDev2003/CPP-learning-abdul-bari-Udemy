#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x =10, y = 20;
    swap(&x, &y); //we are passing the address to swap where pointer is used. (it is ok, not to give "&" sign)
    cout<<x<<" "<<y<<endl;    
    return 0;
}