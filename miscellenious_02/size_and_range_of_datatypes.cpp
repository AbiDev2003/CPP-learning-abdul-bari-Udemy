#include <iostream>
#include <limits.h> // for CHAR_MAX and CHAR_MIN

using namespace std;

int main() {
    int x;
    cout<<"size of integer : "<<sizeof(x)<<endl;
    cout<<"Range of integer : "<<INT_MIN<<" to "<<INT_MAX<<endl; // this will give the range of integer datatype.

    float y;
    cout<<"size of float : "<<sizeof(y)<<endl;

    double z;
    cout<<"size of double : "<<sizeof(z)<<endl;

    char c;
    cout<<"size of char : "<<sizeof(c)<<endl;
    cout<<"Range of char : "<<CHAR_MIN<<" to "<<CHAR_MAX<<endl; // this will give the range of char datatype.

    unsigned char uc;
    cout<<"size of unsigned char : "<<sizeof(uc)<<endl;
    cout<<"Range of unsigned char : "<<0<<" to "<<UCHAR_MAX<<endl; // this will give the range of unsigned char datatype.

    bool b;
    cout<<"size of boolean : "<<sizeof(b)<<endl;


    return 0;
}