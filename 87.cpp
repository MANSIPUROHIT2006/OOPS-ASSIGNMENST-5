 // Write a program that uses streams to read user input, process it, and write the results to a file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int sum = a + b;

    ofstream fout("result.txt");
    fout << "Sum of " << a << " and " << b << " is " << sum << endl;
    fout.close();

    cout << "Result written to file." << endl;
    return 0;
}
