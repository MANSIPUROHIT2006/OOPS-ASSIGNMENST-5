// Create a program that uses formatted input and output to display a table of data.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << setw(10) << "Name" << setw(10) << "Age" << setw(10) << "Marks" << endl;
    cout << left << setw(10) << "Alice" << setw(10) << 20 << setw(10) << 88.5 << endl;
    cout << left << setw(10) << "Bob"   << setw(10) << 22 << setw(10) << 92.3 << endl;
    return 0;
}
