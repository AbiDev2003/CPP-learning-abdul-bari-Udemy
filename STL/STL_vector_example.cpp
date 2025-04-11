#include<vector>
#include<iostream>
#include<list>
#include<forward_list> //singley linked list

using namespace std;

int main(){
    vector<int> v = {10, 20, 30, 40}; //object of vector with int type
    v.push_back(25);
    v.push_back(70);
    v.pop_back();
    v.pop_back();

    for(int x: v){
        cout<<x<<" ";
    } 
    cout<<endl;
    
    vector<int> :: iterator itr;
    cout<<"using iterator"<<endl;
    for(itr = v.begin(); itr != v.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<"using iterator and add one in each"<<endl;
    for(itr = v.begin(); itr != v.end(); itr++){
        cout<<++*itr<<" ";
    }

    //simlilarly we can take 'list' , 'forward_list'  etc. instead of vector too

}