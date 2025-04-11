#include <iostream>

using namespace std;
class Employee{
private:
    int empid;
    string empname;
    public:
    Employee(int e, string n){
        empid = e;
        empname = n;
    }
    
    int getEmpid(){
        return empid;
    }
    string getEmpname(){
        return empname;
    }

};
class FulltimeSalary: public Employee{
    private:
    int salary;
    public:
    FulltimeSalary(int e, string n, int s):Employee(e, n){
        salary = s;
    }
    int getSalary(){
        return salary;
    }

};
class ParttimeDailyWages: public Employee{
    private:
    int wages;
    public:
    ParttimeDailyWages(int e, string n, int w):Employee(e, n){
        wages = w;
    }
    int getWages(){
        return wages;
    }

};
int main() {
    // FulltimeSalary p1(101, "John", 500);
    // ParttimeDailyWages p2(102, "Johney", 5000);

    // details for full time employee
    int empid;
    string empname;
    int salary, wages;

    // Input for full-time employee
    cout << "Enter full-time employee ID: ";
    cin >> empid;
    cout << "Enter full-time employee name: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, empname);
    cout << "Enter full-time employee salary: ";
    cin >> salary;
    FulltimeSalary p1(empid, empname, salary);

    // Input for part-time employee
    cout << "Enter part-time employee ID: ";
    cin >> empid;
    cout << "Enter part-time employee name: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, empname);
    cout << "Enter part-time employee wages: ";
    cin >> wages;
    ParttimeDailyWages p2(empid, empname, wages);

    
    cout<<"Employee full time ID: "<<p1.getEmpid()<<endl;
    cout<<"Employee full time Name: "<<p1.getEmpname()<<endl;
    cout<<"Employee full time Salary: "<<p1.getSalary()<<endl;
    cout<<"Employee part time ID: "<<p2.getEmpid()<<endl;
    cout<<"Employee part time Name: "<<p2.getEmpname()<<endl;
    cout<<"Employee part time Wages: "<<p2.getWages()<<endl;

    return 0;
}