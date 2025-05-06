
// Create a program that demonstrates the difference between text and binary file modes.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int num = 12345;

    // Write as text
    ofstream textFile("textfile.txt");
    textFile << num;
    textFile.close();

    // Write as binary
    ofstream binaryFile("binaryfile.dat", ios::binary);
    binaryFile.write((char*)&num, sizeof(num));
    binaryFile.close();

    cout << "Data written in both text and binary mode." << endl;
    return 0;
}
