#include <iostream>

using namespace std;

class Car{
    public:
    virtual void start(){
        cout<<"Car started"<<endl;
    };
    virtual void stop(){
        cout<<"Car stopped"<<endl;
    };
};

class Innova : public Car{
    public:
    void start(){
        cout<<"Innova started"<<endl;
    };
    void stop(){
        cout<<"Innova stopped"<<endl;
    };
};

class Swift : public Car{
    public:
    void start(){
        cout<<"Swift started"<<endl;
    };
    void stop(){
        cout<<"Swift stopped"<<endl;
    };
};


int main() {
    Car *p = new Innova();
    p->start(); // Innova class start function will be called, as it is overriding the base class start function
    p->stop(); // Innova class stop function will be called, as it is overriding the base class stop function


    p = new Swift();
    p->start(); // Swift class start function will be called, as it is overriding the base class start function
    p->stop(); // Swift class stop function will be called, as it is overriding the base class stop function
    return 0;
}