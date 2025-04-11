// #include <iostream>

// using namespace std;
// // below two fnctions are not needed, just a default argument is needed 
// // int add(int a, int b){
// //     return a+b;
// // }
// // int add(int a, int b, int c){
// // return a+b+c;
// // }

// // insted use default argument 
// int add(int a, int b, int c=0){
//     return a=b+c;
    
// }
// int main() {
//     cout<<add(2,5);
//     cout<<add(2,5,6);
//     cout<<add(2,5,0);
//     return 0;
// }

// another example

#include <iostream>

using namespace std;

int max(int a=0, int b=0, int c=0){
    return a>b && a>c ? a:(b>c?b:c);
}

int main() {
    cout<<max()<<endl;
    cout<<max(10)<<endl;
    cout<<max(10,11)<<endl;
    cout<<max(10,11,12)<<endl;
    return 0;
}