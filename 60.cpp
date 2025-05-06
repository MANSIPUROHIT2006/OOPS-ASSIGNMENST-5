// Implement a program that reads and writes characters using get and put.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    ch = cin.get();  // unformatted input
    cout << "You entered: ";
    cout.put(ch);    // unformatted output
    cout << endl;
    return 0;
}
