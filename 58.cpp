 // Create a program that writes a list of strings to a file
.#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("strings.txt");
    fout << "Apple\nBanana\nCherry\n";
    fout.close();
    return 0;
}
