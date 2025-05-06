// Write a program to open a file in truncation mode and demonstrate its effect.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("truncate.txt");
    file << "Old content.\n";
    file.close();

    ofstream truncateFile("truncate.txt", ios::trunc);
    truncateFile << "New content after truncation.\n";
    truncateFile.close();

    cout << "File content replaced using truncation mode." << endl;
    return 0;
}
