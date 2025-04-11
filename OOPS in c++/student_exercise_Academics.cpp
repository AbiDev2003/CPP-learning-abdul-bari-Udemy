#include <iostream>

using namespace std;

class Student{
    private:
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;

    public:
    Student(int r, string n,int m, int p, int c){
        roll = r;
        name = n;
        mathMarks = m;
        phyMarks = p;
        chemMarks = c;
    }
    int total(){
        return mathMarks + phyMarks + chemMarks;
    }

    char grade(){
        float average = total() / 3;
        if(average > 60){
            return 'A';
        }
        else if(average >= 40 && average < 60){
            return 'B';
        }else{
            return 'C';
        }
    }
};

int main() {
    int roll, m, p, c;
    string name;
    cout<<"enter roll number of the student:"<<endl;
    cin>>roll;
    cout<<"enter name of the student"<<endl;
    cin>>name;
    cout<<"Enter marks of them"<<endl;
    cin>>m>>p>>c;
    Student s(roll, name, m, p, c);
    cout<<"total marks"<<s.total()<<endl;
    cout<<"Grade is"<<s.grade()<<endl;
    return 0;
}