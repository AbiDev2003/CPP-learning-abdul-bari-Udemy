#include <iostream>

using namespace std;

int main() {
    // int *p = new int[5];
    // p[0] = 12;
    // p[1] = 13;
    // cout<<p[1]<<endl;

    // delete []p;
    // // p = NULL;
    // p = nullptr; //used in modern C++

    // int size;
    // cout<<"Enter the size of the elements: ";
    // cin>>size;
    // int A[size];

    // cout<<sizeof A<<endl;


    // int size;
    // cout<<"Enter the size of the elements: ";
    // cin>>size;
    // int *p = new int[size];

    // cout<<"Enter new size: ";
    // cin>>size;
    // p = new int[size];

    // or

    int *p = new int[20];

    delete []p; //delete p before changing the array size, to avoid memory leak

    p = new int[40]; //dynamic allocation

    return 0;
}