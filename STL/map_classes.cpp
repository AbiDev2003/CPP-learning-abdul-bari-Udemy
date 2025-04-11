#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> m;
    m.insert(pair<int, string>(1, "John"));
    m.insert(pair<int, string>(2, "Ravi"));
    m.insert(pair<int, string>(3, "Sanket"));

    map<int, string>::iterator itr;
    for(itr = m.begin(); itr != m.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    } //refer the diagram map_classes_01.jpg
    cout<<endl;
    cout<<m.find(2)->first<<" "<<m.find(2)->second<<endl; //give second element key and value

    //or we can do the same by assigning a variable to the iterator

    map<int, string>::iterator itr1;
    cout<<"Value found is : "<<endl;
    itr1 = m.find(2);
    cout<<itr1->first<<" "<<itr1->second<<endl; //find the element with key 2
    return 0;
}