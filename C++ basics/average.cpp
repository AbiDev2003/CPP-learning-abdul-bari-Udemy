#include <iostream>

using namespace std;

int main() {
    int n;
    int num[100], sum = 0, average;
    cout<<"Enter number of ele,ents: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the elemets"<<endl;
        cin>>num[i];
        sum = sum + num[i];
    }
    average = sum / n;
    cout<<"average is "<<average;
    
    return 0;
}