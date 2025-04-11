#include <iostream>

using namespace std;

// int g=5; //global variable

// void fun(){
//     int a=10; //local variable
//     // a++;
//     g++;
//     cout<<" "<<g<<endl;
// }
// int main() {
//     cout<<g<<endl;
//     fun();
//     cout<<g<<endl;
//     return 0;
// }

// lets say there is one local and global variablein same name, then main() will refer to the nearest scope variable. 

int g=5;
void fun(){
    int g=10;
    {
        int g=0;
        g++;
        cout<<g<<endl;
    }
    g++;
    cout<<g<<endl;
}
int main(){
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
}

