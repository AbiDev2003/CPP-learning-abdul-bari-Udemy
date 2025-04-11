#include <iostream>

using namespace std;

int x =10;
int main() {
    int x =20;
    {
        int x =30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;  //scope resulution sign will be written , if i have to accces to global scope x variable
    return 0;
}