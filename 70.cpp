// Write a program to read binary data from a file using ifstream.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("binary.dat", ios::binary);
    int num;
    while (fin.read((char*)&num, sizeof(num))) {
        cout << "Read number: " << num << endl;
    }
    fin.close();
    return 0;
}
