#include <iostream>

using namespace std;


// example 1
// class Innova{
//     public:
//     static int price;
//     static int getPrice(){
//         return price;
//     }
// };

// int Innova::price = 20;

// int main() {
//     Innova i1, i2, i3;
//     cout<<i1.price<<endl;
//     cout<<i3.price<<endl;

//     cout<<Innova::price<<endl;
//     return 0;
// }


// example 2

class Student{
    public:
    int roll;
    string name;
    static int addNo;
    Student(string n){
        addNo++;
        roll = addNo;
        name = n;
    }
    void display(){
        cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;

    }
};

int Student::addNo = 0;
int main(){
    Student s1("John");
    Student s2("Johney");
    Student s3("Johnah");

    s1.display();
    s3.display();
    cout<<"No of admission "<<Student::addNo<<endl;
    return 0;
}