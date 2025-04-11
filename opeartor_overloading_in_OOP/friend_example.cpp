#include <iostream>

using namespace std;

class Complex{
    private:
    int real;
    int img;

    public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    };
    friend void display(Complex c);

};

void display(Complex c){
    cout<<c.real<<"+i"<<c.img<<endl;
}

int main() {
    Complex c1(1, 2);
    display(c1);
    return 0;
}