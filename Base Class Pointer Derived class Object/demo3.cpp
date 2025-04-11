#include <iostream>

using namespace std;

class BasicCar {
    public:
    void start(){
        cout<<"BasicCar started"<<endl;
    };
};

class AdvancedCar : public BasicCar {
    public:
    void playMusic(){
        cout<<"Music playing"<<endl;
    };
};

int main() {
  
    AdvancedCar a;
    // a.start();
    // a.playMusic();

    BasicCar *ptr1 = &a; // Pointer to stack-allocated object
    ptr1->start();
    // ptr1->playMusic(); // Error: BasicCar class pointer can't access AdvancedCar class function


    //now lets this this othr way, i.e derived class pointer can access the base class function (Derived class pointer and base class object)
    BasicCar b;
    AdvancedCar *ptr2 = (AdvancedCar *)&b; //this is not a good practice, because it is not safe, it may cause error in future. But it will work as we are type casting the base class object to derived class pointer
    ptr2->start();
    ptr2->playMusic(); // this will also work, but it is not a good practice to do this, because it is not safe, it may cause error in future

    return 0;
}