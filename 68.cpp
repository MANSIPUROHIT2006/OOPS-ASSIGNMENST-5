// Create a program that copies the contents of one file to another using file streams.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("source.txt");
    ofstream fout("destination.txt");

    char ch;
    while (fin.get(ch)) {
        fout.put(ch);
    }

    fin.close();
    fout.close();
    cout << "File copied successfully." << endl;
    return 0;
}
