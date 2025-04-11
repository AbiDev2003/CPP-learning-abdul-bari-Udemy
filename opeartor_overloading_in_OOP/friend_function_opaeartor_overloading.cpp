#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    };

    void display()
    {
        cout << real << "+ i " << img << endl;
    };

    // when you declare a fucntion outside the class and he wants to access the private members of the class then you have to declare that function as friend inside the class.
    friend Complex operator+(Complex x, Complex y);
};

// this is the friend function which is declared outside the class

Complex operator+(Complex x, Complex y)
{
    Complex temp;
    temp.real = x.real + y.real;
    temp.img = x.img + y.img;
    return temp;
}

int main()
{
    Complex c1(3, 7);
    Complex c2(4, 8);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}