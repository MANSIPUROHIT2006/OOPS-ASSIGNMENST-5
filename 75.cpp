// Implement a program to create, open, and close files using file streams.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("example.txt");
    fout << "This is a sample file.\n";
    fout.close();

    ifstream fin("example.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();
    return 0;
}
