 // Write a program to demonstrate the use of ifstream and ofstream for file input and output.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("output.txt");
    fout << "This is written to a file.\n";
    fout.close();

    ifstream fin("output.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();
    return 0;
}
