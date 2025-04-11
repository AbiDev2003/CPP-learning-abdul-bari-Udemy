#include <iostream>

using namespace std;

class Rectangle {
    public:
    void area(){
        cout<<"Area of rectangle"<<endl;
    };
    
};

class Cuboid : public Rectangle {
    public:
    void volume(){
        cout<<"Volume of cuboid"<<endl;
    };
};

int main() {
    Cuboid c;
    Rectangle *ptr1 = &c; // Pointer to stack-allocated object
    ptr1->area();
    // ptr1->volume(); // Error: Rectangle class pointer can't access Cuboid class function

    //we can write like this also instaed of the above style, but the newly creaed object willl be stored in heap instead of stack. We have to manually delete the object to avoid memory leaks
    Rectangle *ptr2 = new Cuboid(); // Pointer to heap-allocated object
    ptr2->area();
    // ptr2->volume(); // Error: Rectangle class pointer can't access Cuboid class function

    delete ptr2; // Manually delete the dynamically allocated object to avoid memory leaks



    //write in other way i.e derived class pointer can access the base class function (Derived class pointer and base class object)
    // Rectangle r;
    // // Cuboid *ptr3 = &r; //this is not possible, because Cuboid is derived from Rectangle, meaning every Cuboid is a Rectangle but not every Rectangle is a Cuboid. A derived class pointer (Cuboid*) cannot point to a base class object (Rectangle), because the derived class expects additional members that the base class does not have.

    // // instead w can write like this
    // Cuboid *ptr4 = (Cuboid *)&r; //this is not a good practice, because it is not safe, it may cause error in future. But it will work as we are type casting the base class object to derived class pointer
    

    return 0;
}