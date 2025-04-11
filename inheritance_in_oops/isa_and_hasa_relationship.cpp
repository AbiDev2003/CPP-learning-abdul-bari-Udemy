#include <iostream>

using namespace std;

class Rectangle{
    // Some Data Members
    // Some Member Functions
};
class Cuboid : public Rectangle{
    // Some Data Members
    // Some Member Functions
};

class Table{
    Rectangle top;
    int legs;
};

int main() {
    
    return 0;
}

// The class Cuboid is inherited from the Rectangle class. So, can we say that a Cuboid is a Rectangle? Yes. So, the relationship between the Rectangle class and Cuboid class is the ‘Is A’ relationship.

// The Table class is having an object of the Rectangle class. So, can we say that the Table class has a Rectangle? Yes, the Table class Has a Rectangle. So, the relationship between the Table class and the Rectangle class is the ‘Has A’ relationship.
