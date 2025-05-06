// Write a program to read and write binary data to a file using the read and write functions.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int data = 100;
    ofstream fout("data.bin", ios::binary);
    fout.write((char*)&data, sizeof(data));
    fout.close();

    int readData;
    ifstream fin("data.bin", ios::binary);
    fin.read((char*)&readData, sizeof(readData));
    fin.close();

    cout << "Binary data read: " << readData << endl;
    return 0;
}
