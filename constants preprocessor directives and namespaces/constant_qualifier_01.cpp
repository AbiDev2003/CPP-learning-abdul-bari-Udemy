// #include <iostream>

// using namespace std;

// int main() {
//     // case 1: constant integer
//     // const int x = 10; //constant identifier can not be done, it can be write like this also, int const x = 10;
//     // // x++; //error: increment of read-only variable 'x' can not be done                                       
//     // cout<<x<<endl;

 

//     // case 2: pointer to a constant integer
//     // int x = 20;
//     // const int *ptr = &x;
//     // // *ptr = 30; //error: assignment of read-only location '* ptr'
//     // cout<<*ptr<<endl;
//     // int y = 20;
//     // ptr = &y;
//     // // ++(*ptr); //this can not be modified because a pointer to integer or pointer to constant type cannot modify data, but it can point on any data. 
//     // cout<<*ptr<<endl; //cannot be printed, because of the above line




//     // case 3: constant pointer to an integer
//     // int x = 10;
//     // int const *ptr = &x; //now the data (x) cannot be modified but the pointer can be modified

//     // int y =20;
//     // // *ptr = &y; //ptr cannot be changed as we have locked it to x, pointer is married to x, haha
//     // ptr = &y; //this is allowed, as the pointer is not constant, *ptr is constant
//     // cout<<*ptr<<endl;




//     // case 4: constant pointer to a constant integer, both data and pointer are constant
//     // int x = 10;
//     // const int *const ptr = &x;
//     // // *ptr = 20; //error: assignment of read-only location '* ptr'
//     // int y = 20;

//     // // ptr = &y; //error: assignment of read-only variable 'ptr'
//     // cout<<*ptr<<endl;
//     return 0;
// }




// case 5: constant member function, a function is restricted to modify the data members of the class
// #include <iostream>

// using namespace std;

// class Demo{
//     public:
//     int x = 10;
//     int y = 20;
//     void Display() const{
//         x++;
//         cout<<x <<" "<<y<<endl;
//     }

// };

// int main() {
//     Demo d;
//     d.Display();
//     return 0;
// }





// case 6 : call by reference using constant
#include <iostream>

using namespace std;

void fun(const int &x, int &y){
    // x++; //error: increment of read-only reference 'x'. Basically The function is call be reference, which means the data can be modified. If we use const anyway it will not allow to modify the data, so it will be act as call by value.
}
int main(){
    int a = 10, b = 20;
    fun(a, b);
    cout<<"Main "<<a<<" "<<b<<endl;
    return 0;
}

