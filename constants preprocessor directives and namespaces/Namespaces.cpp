#include <iostream>
//namespace is used to resolve the naming conflicts, to avoid ambiguity. Ambiguity means the same name is used for different classes or functions
using namespace std; //. std is inbuilt which controls normal input and output operations.
// using keyword is used to access the variable in the namespace



namespace first{
    void fun(){
        cout<<"first"<<endl;
    }
}


namespace second{
    void fun(){
        cout<<"second"<<endl;
    }
}


using namespace first;
int main() {
    cout<<"Hello"<<endl;
    fun();
    //scope resolution operator is used to access the function/data member of the namespace or any outside class or global scope or outside function
    first::fun(); //first ke andar jo fun hai usko call kar raha hai
    second::fun(); //second ke andar jo fun hai usko call kar raha hai
    return 0;
}