// Write a program that demonstrates the use of exception handling with file operations.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;
    file.exceptions(ifstream::failbit | ifstream::badbit);

    try {
        file.open("nonexistent.txt");
        cout << "File opened successfully!" << endl;
        file.close();
    } catch (const ifstream::failure &e) {
        cout << "Exception opening file: " << e.what() << endl;
    }

    return 0;
}
