#include <iostream>

using namespace std;

int Linearsearch(int A[], int length, int key){
    for (int i = 0; i < length; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
    return 0;
    

}

int main() {
    int A[] = {1, 2,3 , 4, 5, 6, 7, 8, 9, 10};
    int k;
    cout<<"Enter an element you want to find: "<<endl;
    cin>>k;
    int index = Linearsearch(A, 10, k);
    cout<<"Index is at: "<<index<<endl;
    return 0;
}