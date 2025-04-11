#include <iostream>

using namespace std;

void display(){
    cout<<"hello"<<endl;
}

int max(int x, int y){
    return x>y?x:y;
}

int min(int x, int y){
    return x<y?x:y;
}


int main() {
    // void (*fp)();  //pointer declaration
    // fp = display; //pointer initialization
    // (*fp)(); //calling of fucntion

    int (*fmx)(int, int);
    fmx = max;
    (*fmx)(10, 5); //calling
    int maximum = (*fmx)(10, 5);// hold in a variablr
    cout<<maximum<<endl;

    int (*fmn)(int , int);
    fmn = min;
    // (*fmn)(10,5); 
    int minimum = (*fmn)(10, 5);// hold in a variablr
    cout<<minimum<<endl;
    return 0;
}