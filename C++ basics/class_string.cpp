#include <iostream>

using namespace std;

int main() {
    // string s1;
    // cout<<"enter a string: "<<endl;
    // getline(cin, s1);
    // cout<<s1.length()<<endl;
    // cout<<s1.size()<<endl;
    // cout<<s1.capacity()<<endl;
    // s1.resize(50);
    // cout<<s1.capacity()<<endl;
    // cout<<s1.max_size()<<endl;
    // s1.clear();
    // cout<<s1.length()<<endl;
    // if (s1.empty())
    // {
    //     cout<<"It is empty"<<endl;
    // }else{
    //     cout<<"Not empty";
    // }



    //append and insert functions
    // string str = "Hello";
    // cout<<str.capacity()<<endl;
    // str.append(" world. How are you all ??");
    // cout<<str<<endl;
    // cout<<str.capacity()<<" "<<str.length()<<endl;

    // // str.insert(3, "KK");
    // str.insert(3, "APPLE", 2);
    // cout<<str<<endl;


    // replace and swap functions
    // string str = "programming";
    // string s2 = "coding";
    // // str.replace(3, 4, "KK");
    // str.replace(3, 6, "H");
    // str.erase();
    // str.push_back('z');
    // str.pop_back();
    // str.swap(s2);
    // cout<<str<<endl;
    // cout<<s2<<endl;



    // copy and find functions
    // string s= "Welcome to VS code to progrm";
    // char str[10];
    // // s.copy(str, s.length());
    // s.copy(str, 3);
    // str[3] = '\0';
    // cout<<s.find("to")<<endl; //find occurence of the item from left hand side
    // cout<<s.rfind("to")<<endl; //find occurence of the item from right hand side
    // cout<<str<<endl;
    // cout<<s.find_first_of('o')<<endl;
    // cout<<s.find_last_of('o', 7)<<endl;



    // substring, compare and operators 
    // string str1 = "Programming";
    // string str2 = "Hello";
    // cout<<str1.substr(3)<<endl;
    // cout<<str1.substr(3,4)<<endl;
    // cout<<str1.compare(str2)<<endl;
    // cout<<str1.at(4)<<endl;
    // cout<<endl;



    // iterator
    // string str = "hello";
    // string::iterator it;
    // for(it = str.begin(); it!= str.end(); it++){
    //     // cout<<*it;
    //     *it = *it - 32;  //converst to upper case
    //     cout<<*it;
    // }

    //reverse iterator
    string str = "hello";
    string::reverse_iterator it;
    for(it = str.rbegin(); it!= str.rend(); it++){
        // cout<<*it;
        *it = *it - 32;  //converst to upper case
        cout<<*it;
    }
    cout<<endl;

    

    
    



    return 0;
}