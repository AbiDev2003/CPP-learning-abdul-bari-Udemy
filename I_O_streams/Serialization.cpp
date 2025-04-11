// Serialization in C++ is the process of converting an object's state into a format that can be stored (e.g., in a file) or transmitted (e.g., over a network) and later reconstructed. This allows you to save the state of an object and restore it at a later time.

//Example Explanation: In the provided code, serialization is demonstrated by saving and loading the state of a Student object to and from a file named "Student.txt".


#include <iostream>
#include <fstream>

using namespace std;
class Student
{
    public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator<<(ofstream &ofs, Student &s);
    friend ifstream & operator<<(ifstream &ifs, Student &s);
};

ifstream & operator >> (ifstream &ifs, Student &s){
    ifs>>s.name; //reading name
    ifs>>s.roll; //reading roll
    ifs>>s.branch; //reading branch

    return ifs;
}

ofstream & operator<<(ofstream &ofs, Student &s){
    ofs<<s.name<<endl;  //storing name
    ofs<<s.roll<<endl;  //storing roll
    ofs<<s.branch<<endl;  //storing branch
    return ofs;
}


int main()
{
    Student s1;
    // s1.name = "Johnah"; //we created name as Johnah
    // s1.roll = 10; //we created roll as 10
    // s1.branch = "cs"; //we created branch as cs
    
    // ofstream ofs("Student.txt", ios::trunc); // Open a file named "Student.txt" in truncation mode (ios::trunc)
    // ios::trunc means the file will be overwritten if it already exists
    

    // now i can read from the file Student.txt
    // ofs<<s1; //stroring the entire object
    // ofs.close(); //closing the file
    
    ifstream ifs("Student.txt");  // Open a file named "Student.txt" in read mode, it will not change the file, also it will not create a file if it does not exist
    ifs>>s1; //reading the entire object

    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll: "<<s1.roll<<endl;
    cout<<"branch: "<<s1.branch<<endl;
    ifs.close();

    return 0;
}