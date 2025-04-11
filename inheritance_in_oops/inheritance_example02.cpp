#include <iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);

    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    void setLength(int l);
    void setBreadth(int l);

    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();

};

class Cuboid: public Rectangle{
    private:
    int height;
    public:
    Cuboid(int h){
        height = h;
    }

    int getHeight(int h){
        return height;
    }
    void setHeight(int h){
        height = h;
    }

    int volume(){
        return getLength() * getBreadth() * height;
    }

};

int main() {
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout<<"Volume is: "<<c.volume()<<endl;
    return 0;
}





// we used scope reslution operaror, because we are defining the function outside the class
Rectangle::Rectangle(){
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r){
    length = r.length;
    breadth = r.breadth;
}
Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed"<<endl;
}
void Rectangle::setLength(int l){
    length = l;
}
void Rectangle::setBreadth(int b){
    breadth = b;
}