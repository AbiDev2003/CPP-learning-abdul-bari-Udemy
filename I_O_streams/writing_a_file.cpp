#include <iostream>  // For standard I/O operations
#include <fstream>   // For file handling

using namespace std;

int main() {
    // Create an ofstream object to write to a file named "My.txt"
    // 'ios::trunc' ensures that the file is cleared before writing (if it exists)
    ofstream ofs("My.txt", ios::trunc);

    // Writing data to the file
    ofs << "John" << endl;  // Writes "John" followed by a newline
    ofs << 25 << endl;      // Writes the number 25 followed by a newline
    ofs << "cs" << endl;    // Writes "cs" followed by a newline
    ofs << "Abinash" << endl;    // Writes "cs" followed by a newline

    // Close the file after writing
    ofs.close();

    return 0;
}
