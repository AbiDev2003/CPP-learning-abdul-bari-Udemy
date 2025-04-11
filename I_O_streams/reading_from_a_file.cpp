#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // ifstream ifs("My.txt"); //file open in same line
    ifstream ifs;
    ifs.open("My.txt"); //file open in different line

    // if(ifs){
    //     cout<<"File is opened"<<endl;
    // } //check if the file is open or not
    
    // or
    if(ifs.is_open()){
        cout<<"File is opened"<<endl;
    } //check if the file is open or not
    

    string name;
    int roll;
    string branch;

    ifs>>name>>roll>>branch;
    ifs.close();

    cout<<"Name: "<<name<<endl;
    cout<<"Roll no: "<<roll<<endl;
    cout<<"Branch: "<<branch<<endl;
   
    return 0;
}