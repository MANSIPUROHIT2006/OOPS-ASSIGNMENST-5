 // Write a program that appends new data to an existing file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("append.txt", ios::app);
    fout << "This line is appended.\n";
    fout.close();
    cout << "Data appended to file." << endl;
    return 0;
}
