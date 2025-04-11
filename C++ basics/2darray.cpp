#include <iostream>

using namespace std;

int main() {
    int A[2][3] ;

    // for (int i = 0; i < 2; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(auto& x:A){
        for(auto& y:x){
            cin>>y;
        }
        cout<<endl;
    }

    for(auto& x:A){
        for(auto& y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}