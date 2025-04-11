#include <iostream>

using namespace std;
// int v=0;  //this is a global variable
void fun() {
    // note - static variable is just like a global variable, when fun() execution will end, static variable does not get deleted along with fun().
    static int v=0;  //this is a static variable
    int a =5;
    v++;
    cout<<a<<" "<<v<<endl;
}


int main(){
    fun();
    fun();
    fun();
}