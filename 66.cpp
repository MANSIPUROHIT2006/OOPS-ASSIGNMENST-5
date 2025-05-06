// Write a program to read data from a text file and display it on the console.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("data.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();
    return 0;
}
