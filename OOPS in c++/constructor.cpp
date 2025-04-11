#include <iostream>

using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    // Rectangle(){
    //     int length = 0;
    //     int breadth = 0;
    // }  //default constructor(not need to write manually, it automatically created by compiler)
    // defaut constructor is not required , if we provide dafault argument in parameterized construtcor

    Rectangle(int l = 1, int b = 1){
        setLength(l);
        setBreadth(b);
    } //parameterized construtor

    Rectangle(Rectangle &rect){
        length = rect.length;
        breadth = rect.breadth;
    }   

    void setLength(int l){
        if(l > 0){
            length = l;
        }else{
            length = 1;
        }
    }
    void setBreadth(int b){
        if(b > 0){
            breadth = b;
        }else{
            breadth = 1;
        }
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
};

int main() {

    Rectangle r1;
    Rectangle r1(10, 5);
    Rectangle r2(r1);
    cout<<r1.area()<<endl;
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    return 0;
}