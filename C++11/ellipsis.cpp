//Ellipsis are used for passing variable number of arguments to a function. It is used in C and C++ programming languages. It is also called as variadic functions. The ellipsis is represented by three dots (...). The ellipsis must be the last parameter in the function declaration. The number of arguments passed to the function can be determined using the va_list, va_start, va_arg, and va_end macros defined in the cstdarg header file.


#include <iostream>
#include<cstdarg> // for va_list, va_start, va_end

using namespace std;

int sum(int n, ...){
    va_list list; // Initialize a variable of type va_list
    va_start(list, n); // Initialize the va_list with the last fixed parameter
   
    int s = 0;
    for(int i = 0; i < n; i++){
        s = s + va_arg(list, int); 
    }
    return s;
    va_end(list); // Clean up the va_list, not necessary in C++ but good practice
}

int main() {
    int n;
    cout<<"Enter the number of elements you want to add: ";
    cin>>n;
    cout<<"Sum is, by taking user input "<<n<<" "<<sum(n, 1, 2,3, 4, 5, 6,7 , 8 )<<endl; //first we have to pass number of arguments and then the numbers to add. 3 arguments, they are 1, 2 and 3.
    cout<<"Sum is "<<sum(3, 10, 20, 30)<<endl;
    return 0;
}