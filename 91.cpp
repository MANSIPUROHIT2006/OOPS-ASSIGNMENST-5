 // Implement a program that reads and processes a CSV file using file streams.

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.csv");
    string line;

    cout << "CSV Data:\n";
    while (getline(file, line)) {
        stringstream ss(line);
        string value;
        while (getline(ss, value, ',')) {
            cout << value << "\t";
        }
        cout << endl;
    }

    file.close();
    return 0;
}
