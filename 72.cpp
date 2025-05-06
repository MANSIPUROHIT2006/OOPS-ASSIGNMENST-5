// Create a program that demonstrates the use of fstream for both input and output operations.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("sample.txt", ios::in | ios::out | ios::app);
    file << "Appending a new line.\n";

    file.seekg(0); // Move to beginning for reading
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
