 // Write a program to open a file in different modes (read, write, append) and demonstrate their effects.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("multi.txt", ios::out);
    fout << "Writing to file.\n";
    fout.close();

    ofstream fout2("multi.txt", ios::app);
    fout2 << "Appending more text.\n";
    fout2.close();

    ifstream fin("multi.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();
    return 0;
}
