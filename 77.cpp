// Write a program that uses the seekp and tellp functions to set and retrieve the put pointer position.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("position.txt");
    fout << "Hello";
    cout << "Put pointer position: " << fout.tellp() << endl;
    fout.seekp(0);
    fout << "World";
    fout.close();
    return 0;
}
