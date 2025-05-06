 // Implement a program to write binary data to a file using ofstream.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("binary.dat", ios::binary);
    int numbers[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; ++i) {
        fout.write((char*)&numbers[i], sizeof(numbers[i]));
    }
    fout.close();
    return 0;
}
