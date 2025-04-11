#include <iostream>

using namespace std;

//do a class named rational and do the operator overloading for + operator
class Rational
{
    private:
    int p;
    int q;

    public:
    Rational(){
        p = 1;
        q = 1;
    }

    Rational(int p, int q){
        this->p = p;
        this->q = q;
    }
    Rational operator+(Rational r){
        Rational sum;
        sum.p = this->p * r.q + this->q * r.p;
        sum.q = this->q * r.q;
        return sum;

    }
    friend ostream &operator<<(ostream &o, Rational &r);
};

ostream &operator<<(ostream &o, Rational &r){
    o<<r.p<<"/"<<r.q;
    

}

int main() {
    Rational r1(3, 4), r2(1, 2), r3;
    r3 = r1 + r2;
    cout<<"Sum of"<<r1<<" and "<<r2<<" is "<<r3<<endl;
    return 0;
}