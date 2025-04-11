// Include necessary libraries
#include <iostream>   // For input/output operations (cin, cout)
#include <fstream>    // For file operations (reading/writing files)

using namespace std;  // So we don't need to write std:: before every standard function

// Define an Item class to store product information
class Item {
private:
    string name;     // Stores the item's name (private - only accessible within class)
    float price;     // Stores the item's price
    int quantity;    // Stores how many items are available

public:
    // Constructors
    Item() {}  // Default constructor (creates empty Item)
    Item(string n, float p, int q);  // Constructor that sets name, price, quantity
    
    // Friend functions for file and console operations
    friend ofstream& operator<<(ofstream& fos, Item& item);  // For writing to files
    friend ifstream& operator>>(ifstream& fis, Item& item);  // For reading from files
    friend ostream& operator<<(ostream& os, Item& item);     // For printing to console
};

int main() {
    // Variables to store temporary input
    int n;           // Will store how many items user wants to enter
    string name;     // Temporary storage for item name
    float price;     // Temporary storage for item price
    int quantity;    // Temporary storage for item quantity

    // Ask user how many items they want to enter
    cout << "Enter the number of items: " << endl;
    cin >> n;

    // Create an array to store all items (using dynamic memory allocation)
    Item** list = new Item*[n];  // 'list' is an array of pointers to Item objects

    // Loop to input details for each item
    for(int i = 0; i < n; i++) {
        cout << "Enter the " << i+1 << " item name, price and quantity: " << endl;
        cin >> name >> price >> quantity;

        // Create a new Item object and store it in our array
        list[i] = new Item(name, price, quantity);
    }

    // ===== WRITING TO FILE =====
    // Open file for writing (ios::trunc means overwrite if file exists)
    ofstream fos("Items.txt", ios::trunc);
    
    // Write each item to the file
    for(int i = 0; i < n; i++) {
        fos << *list[i];  // Uses our custom << operator for files
    }
    fos.close();  // Always close files when done

    // ===== CLEAN UP MEMORY =====
    // First delete each individual Item object
    for(int i = 0; i < n; i++) {
        delete list[i];
    }
    // Then delete the array itself
    delete[] list;

    // ===== READING FROM FILE =====
    ifstream fis("Items.txt");  // Open file for reading
    Item item;                  // Temporary Item object for reading
    int i = 1;                  // Counter for display

    cout << "\nItems read from file: " << endl;
    
    // Keep reading until end of file
    while(fis >> item) {  // Uses our custom >> operator for files
        cout << "Item " << i++ << ": " << item << endl;  // Uses our custom << for console
    }
    fis.close();  // Close the file

    return 0;  // Program ends successfully
}

// ===== CLASS FUNCTION IMPLEMENTATIONS =====

// Constructor implementation - sets initial values
Item::Item(string n, float p, int q) {
    name = n;
    price = p;
    quantity = q;
}

// Implementation for writing to file (format: name\nprice\nquantity\n)
ofstream& operator<<(ofstream& fos, Item& item) {
    fos << item.name << endl << item.price << endl << item.quantity << endl;
    return fos;  // Return the file stream for chaining operations
}

// Implementation for reading from file (reads name, price, quantity)
ifstream& operator>>(ifstream& fis, Item& item) {
    fis >> item.name >> item.price >> item.quantity;
    return fis;  // Return the file stream for chaining operations
}

// Implementation for printing to console (user-friendly format)
ostream& operator<<(ostream& os, Item& item) {
    os << "Name: " << item.name 
       << ", Price: $" << item.price 
       << ", Quantity: " << item.quantity;
    return os;  // Return the output stream for chaining operations
}