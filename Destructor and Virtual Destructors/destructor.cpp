#include <iostream>

using namespace std;

class Demo{
    int *p;
    public:
    Demo(){
        p = new int[10];
        cout<<"Demo created"<<endl;
    }

    ~Demo(){
        delete []p; //deleting the memory allocated dynamically, not to cause memory leak.
        cout<<"Demo destroyed"<<endl;
    }
};
void fun(){
    // Test t;
    Demo *p = new Demo(); //object created dynamically, so destructor will not be called automatically. We have to delete it manually. Otherwise it will cause memory leak.
    delete p;
}
int main() {
    fun();
    
    return 0;
}

