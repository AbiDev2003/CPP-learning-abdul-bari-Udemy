#include <iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    void setLength(int l){
        if(l >= 0){
            length = l;
        }else{
            length = 0;
        }
    }
    void setBreadth(int b){
        if(b >= 0){
            breadth = b;
        }else{
            breadth = 0;
        }
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length * breadth;
    }
    int perimater(){
        return 2* (length + breadth);
    }

};

int main() {
    Rectangle r1;
    // r1.length = 10;
    // r1.breadth = 5;  // This will give an error as length and breadth are private members of the class Rectangle

    r1.setLength(10);
    r1.setBreadth(5);
    cout<<r1.area()<<endl;
    cout<<r1.perimater()<<endl;

    return 0;
}