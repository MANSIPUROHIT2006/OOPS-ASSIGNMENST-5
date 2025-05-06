// Implement a program to write user input to a text file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout("output.txt");
    string line;
    cout << "Enter text (type 'exit' to stop):" << endl;
    while (true) {
        getline(cin, line);
        if (line == "exit") break;
        fout << line << endl;
    }
    fout.close();
    return 0;
}
