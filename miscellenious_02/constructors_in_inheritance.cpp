#include <iostream>

using namespace std;

class Base{
    public:
    Base(){
        cout<<"Default of base"<<endl;
    }
    Base(int x){
        cout<<"Parame of base "<<x<<endl;
    }
};
class Derived:public Base{
    public:
    Derived(){
        cout<<"Default of derived"<<endl;
    }
    Derived(int a){
        cout<<"Param of derived "<<a<<endl;
    }
    Derived(int x, int a): Base(x){
        cout<<"Param of derived "<<a<<endl;
    }
    
};

int main() {
    // Derived d; //show default of base and default of derived
    // Derived d(10); //show defaut of base and param of derived
    Derived d(20, 10); //show param of base and param of derived
    return 0;
}