#include <iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(); //default constructor
    Rectangle(int l, int b);  //parameterized constructor
    Rectangle(Rectangle &r);  //copy constructor

    void setLength(int l); //mutator
    void setBreadth(int b); //mutator
    int getLength(); //accesor
    int getBreadth(); //accesor

    //here area function will be inline function, because when we write the function inside the class, it becomes a part of main() function
    int area();
    int Perimeter(); //we dont want perimeter() to be inline, so we write the function definition outside of the class using scope resolution operator

    bool isSquare(); //enquary

    ~Rectangle(); //destructor
};


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

void Rectangle::setLength(int l){
    length = l;
}
void Rectangle::setBreadth(int b){
    breadth = b;
}

int Rectangle::area(){
        return length*breadth;
}
int Rectangle::Perimeter(){
    return 2*(length + breadth);
}

bool Rectangle::isSquare(){
    return length==breadth;
}

Rectangle::~Rectangle(){
    cout<<"Rectangle destroyed"<<endl;
}


int main() {
    Rectangle r1(10, 5);
    cout<<r1.area()<<endl;
    cout<<r1.Perimeter()<<endl;
    if(r1.isSquare() == true){
        cout<<"it is a square";
    }else{
        cout<<"Not a square"<<endl;
    }
    return 0;
}