// preprocessor directive are otherwise called as macros. It is a way to define constants or functions that are used in the program.

// #include <iostream>

// using namespace std;

// int main() {
//     cout<<"File :"<<__FILE__<<endl;
//     cout<<"Date :"<<__DATE__<<endl;
//     cout<<"Time :"<<__TIME__<<endl;
//     cout<<"Line :"<<__LINE__<<endl;
//     cout<<"ANSI :"<<__STDC__<<endl;

//     return 0;
// }




#include <iostream>
#define PI 3.14159 //this is a macro, PI is a function that takes no arguments and returns 3.14159
#define c cout //this is a macro, c is a function that takes no arguments and returns cout
#define SQR(x) ((x)*(x)) //this is a macro, SQR is a function that takes x and returns x*x
#define MSG(x) #x //this is a macro, MSG is a function that takes x and returns "x"

#ifndef PI
    #define PI 3.14159
#endif  //ifndef is used to check if the macro is already defined or not. If not defined then it will define it.

#define max(x, y) (x > y ? x : y)

using namespace std;

int main() {
    cout << PI << endl;
    c << 10 << endl;

    cout<<SQR(5)<<endl;
    cout<<MSG("Hello")<<endl;

    cout<<max(10, 8)<<endl;
    return 0;
} 