 // Create a program that uses file streams to merge the contents of multiple text files into a single file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file1("file1.txt"), file2("file2.txt");
    ofstream merged("merged.txt");

    string line;
    while (getline(file1, line)) merged << line << endl;
    while (getline(file2, line)) merged << line << endl;

    file1.close();
    file2.close();
    merged.close();

    cout << "Files merged successfully!" << endl;
    return 0;
}
