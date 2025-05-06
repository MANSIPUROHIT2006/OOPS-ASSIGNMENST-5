// Create a program that uses the seekg and tellg functions to manipulate file pointers.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("example.txt");
    fin.seekg(0, ios::end);
    int length = fin.tellg();
    cout << "File length: " << length << " bytes\n";

    fin.seekg(0, ios::beg);
    string line;
    getline(fin, line);
    cout << "First line: " << line << endl;

    fin.close();
    return 0;
}
