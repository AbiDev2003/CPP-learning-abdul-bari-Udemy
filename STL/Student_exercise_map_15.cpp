// Problem : Write a program to store and retrive list of item in a file Using vector classes 
// Classes should have 1. Name 2. Price 3. Quantity


#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Items{
    private:
    string name;
    int price;
    int quantity;

    public:
    Items(){};
    Items(string n, int p, int q);
    friend ofstream & operator<<(ofstream &fos, Items &i);
    friend ifstream &operator>>(ifstream &fis, Items &i);
    friend ostream & operator<<(ostream &os,Items &i);


};

int main() {
    int n; //number of items
    string name;
    int price;
    int quantity;

    cout<<"Enter number of items: ";
    cin>>n;


    //vector of pointers to Items class, we inserted all the infos inside 'itemslist'
    vector <Items *> itemslist;
    cout<<"Enter all items"<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Enter name, price and quantity of item "<<i + 1 <<":"<<endl;
        cin>>name>>price>>quantity;
        itemslist.push_back(new Items(name, price, quantity));
    }

    //now lets create a txt file and write all the infos in it
    ofstream fos("Items_lists.txt", ios::trunc);
    //itemslist ke andar jitne saare infos hai us sabko file mein daal lo
    vector<Items *>::iterator itr;
    for(itr = itemslist.begin(); itr != itemslist.end(); itr++){
        fos<<**itr; //we used double dereference operator because we are using vector of pointers to Items class
    }
    fos.close();

    //clean dynamically allocated memory, for good practice
    //we will delete all the pointers in the vector, and clear the vector
    for(itr = itemslist.begin(); itr != itemslist.end(); itr++){
        delete *itr; //delete each dynamically allocated items
    }
    itemslist.clear(); //clear the vector


    //now we will read from the file
    Items items;
    ifstream fis("Items_lists.txt");
    for(int i = 0; i<n; i++){
        fis>>items;
        cout<<"Here is your file info: "<<endl<<items<<endl;
    }
    return 0;
}
Items::Items(string n, int q, int p){
    name = n;
    price = p;
    quantity = q;
}
ofstream & operator<<(ofstream &fos, Items &i){
    fos<<i.name<<endl;
    fos<<i.price<<endl;
    fos<<i.quantity<<endl;
    return fos;
}
ifstream &operator>>(ifstream &fis, Items &i){
    fis>>i.name;
    fis>>i.price;
    fis>>i.quantity;
    return fis;
}
ostream & operator<<(ostream &os,Items &i)
{
    os<<i.name<<endl<<i.price<<endl<<i.quantity<<endl;
    return os;
}
