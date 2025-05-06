 // Write a program that uses file streams to create a simple text editor.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("editor.txt", ios::app);
    string line;

    cout << "Enter text (type 'exit' to quit):\n";
    while (true) {
        getline(cin, line);
        if (line == "exit") break;
        file << line << endl;
    }

    file.close();
    cout << "Text saved to editor.txt" << endl;
    return 0;
}
