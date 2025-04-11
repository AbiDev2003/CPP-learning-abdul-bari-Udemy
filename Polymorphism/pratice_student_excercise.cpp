#include <iostream>

using namespace std;
class Shape{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
}; //this is a abstract class, so its object can't be created, but its pointer can be created
class Rectangle : public Shape{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l = 1, int b = 1){
        length = l;
        breadth = b;
    }
    float area(){
        return length * breadth;
    }
    float perimeter(){
        return 2 * (length + breadth);
    }

};
class Circle : public Shape{
    private:
    int radius;

    public:
    Circle(int r = 1){
        radius = r;
    }
    float area(){
        return 3.1425 * radius * radius;
    }
    float perimeter(){
        return 2 * 3.1425 * radius;
    }   
};
int main() {
    // Rectangle r(10, 5);
    // Shape *ptr1 = &r;
    // cout<<"Area of rectangle "<<ptr1->area()<<endl;
    // cout<<"Perimeter of rectangle "<<ptr1->perimeter()<<endl<<endl;
    
    
    // Circle c(10);
    // Shape *ptr2 = &c;
    // cout<<"Area of Circle "<<ptr2->area()<<endl;
    // cout<<"Perimeter of Circle "<<ptr2->perimeter()<<endl;


    // or
    
    Shape *ptr = new Rectangle(10, 5);
    cout<<"Area of rectangle "<<ptr->area()<<endl;
    cout<<"Perimeter of rectangle "<<ptr->perimeter()<<endl<<endl;
    
    ptr = new Circle(10);
    cout<<"Area of circle "<<ptr->area()<<endl;
    cout<<"Perimeter of circle "<<ptr->perimeter()<<endl<<endl;
    return 0;
}