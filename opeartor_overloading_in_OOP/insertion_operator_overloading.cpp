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
    }

    // void display(){
    //     cout<<real<<"+ i "<<img<<endl;
    // };

    // instead of writing disply function(like above) to display we can write insertion operator to display the output. Also use friend function if you are writing the function body outside the class. 
    friend ostream &operator<<(ostream &o, Complex &x);
};

ostream &operator<<(ostream &o, Complex &x)
{
    cout << x.real << "+ i " << x.img << endl;
    // or
    // o << x.real << "+ i " << x.img << endl;
}

int main()
{
    Complex c1(3, 7);
    cout << c1;

    // or we can write like this also
    operator<<(cout, c1);
    return 0;
}

