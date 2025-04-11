#include <iostream>
#include <memory> // Include memory header for smart pointers

using namespace std;


class Rectangle{
    int length;
    int breadth;

    public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    int area(){
        return length * breadth;
    }
};

int main() {
    //problem with normal pointers is that, when we dynamically aloocate a variable(heap memory) we have to delete it manually as well, otherwise it will cause memory leak problem. languages like java, c# and .net frameworks provide automatic garbage collection, but in C++ we have smart pointers to avoid memory leak problems.

    // unique_ptr<Rectangle> ptr(new Rectangle(10, 5));
    // cout<<ptr->area()<<endl; 
    
    // // unique_ptr<Rectangle> ptr2 = ptr; //this is not possible in unique_ptr
    // //so we have to move/delete ptr to use it in ptr2

    // unique_ptr<Rectangle> ptr2 = move(ptr); //this is possible in unique_ptr
    // cout<<ptr2->area()<<endl;
    // cout<<ptr->area()<<endl; //this will not print anything, because ptr is not not pointing to any of the valid object, it is null now.
    
    //shared pointer
    shared_ptr<Rectangle> ptr(new Rectangle(10, 5));
    cout<<ptr->area()<<endl; 

    shared_ptr<Rectangle> ptr2 = ptr; //this is possible in shared_ptr
    cout<<"This is coming from ptr2 "<<ptr2->area()<<endl;
    cout<<"This is coming from ptr "<<ptr->area()<<endl; //this will print the same value as ptr2, because both are pointing to the same object.
    cout<<"This gives reference counter "<<ptr.use_count()<<endl;
    


    return 0;
}