#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter n";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= n; j++)
        {
            /* code */
            if (i+j <= n+1)
            {
                /* code */
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
        
    }
    
    
    

    return 0;
}