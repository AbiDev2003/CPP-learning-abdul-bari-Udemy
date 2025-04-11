// There are two types of files: text files and binary files.
// Text files are files containing sequences of characters, and it is human readable. it is possible to open a text file with a text editor.
// Binary files are files containing sequences of bytes, and it is not human readable. it is not possible to open a binary file with a text editor.
// In C++, you can work with both text and binary files using the fstream library.

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // to read and write in a file we have to use insertion and extraction operators
    // to read and write in binary in a file we have to use read() and write() functions, as well as ios::binary flag
    //example
    ofstream ofs("file.txt", ios::binary); // Open a file named "file.txt" in binary mode
    int x = 10;
    ofs.write((char *)&x, sizeof(x)); // Write the value of x to the file
    ofs.close(); // Close the file

    ifstream ifs("file.txt"); // read the file
    int y;
    ifs.read((char *)&y, sizeof(y)); // Read the value of y from the file
    cout << y << endl; // Output the value of y
    ifs.close(); // Close the file

    
    return 0;
}