// Create a program that reads and displays multiple lines of text using cin and cout.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "Enter multiple lines of text (type 'exit' to stop):" << endl;

    while (true) {
        getline(cin, line);
        if (line == "exit") break;
        cout << "You entered: " << line << endl;
    }

    return 0;
}
