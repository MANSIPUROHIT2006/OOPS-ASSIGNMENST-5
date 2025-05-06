// implement a program that reads from and writes to a file in binary mode.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int number = 12345;

    ofstream fout("binfile.dat", ios::binary);
    fout.write((char*)&number, sizeof(number));
    fout.close();

    int readNum;
    ifstream fin("binfile.dat", ios::binary);
    fin.read((char*)&readNum, sizeof(readNum));
    fin.close();

    cout << "Number read from binary file: " << readNum << endl;
    return 0;
}
