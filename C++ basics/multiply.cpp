#include <iostream>

using namespace std;

int main() {
    int A[10][10];
    int B[10][10];
    int C[10][10];
    int rows1, column1, rows2, column2;
    cout<<"Enter rows and column of first matrix: ";
    cin>>rows1>>column1;
    cout<<"Enter rows and column of second matrix: ";
    cin>>rows2>>column2;

    if (column1 != rows2)
    {
        cout<<"Can not be multiplied";
        return 0;
    }else{
        // String elemet of first matrix
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                cout<<"Enter Elemets of the first matrix: "<<endl;
            }
            
        }
        

        // storing element of second matrix
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                cout<<"Enter Elemets of the second matrix: "<<endl;
            }
            
        }

        // multiplying first matrix to second matrix
        for (size_t i = 0; i < rows1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                C[i][j] = A[10][10] * B[10][10];
            }
            
        }
        

    }
    
    

   
}