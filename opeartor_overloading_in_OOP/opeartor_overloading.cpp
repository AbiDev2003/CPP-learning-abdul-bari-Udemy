#include <iostream>

using namespace std;

class Complex
{

public:
    int real;
    int img;
    Complex(int r = 0, int i = 0){
        real = r;
        img = i;
    };

    Complex add(Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

    // or we can write using operator+ instead of add function
    Complex operator+(Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    // ~Complex();
};

int main() {
    Complex C1(3, 7);
    Complex C2(4, 8);
    // Complex C3 = C1.add(C2);
    // or 
    Complex C3 = C1 + C2;  //when we use operator+ function, we have to write like this.
    cout<<C3.real<<"+ i "<<C3.img<<endl;
    return 0;
}