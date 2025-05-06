// Create a program that uses file streams to search for a specific word in a text file and count its occurrences.

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("sample.txt");
    string word, target = "code";
    int count = 0;

    while (file >> word) {
        if (word == target) count++;
    }

    file.close();
    cout << "Occurrences of '" << target << "': " << count << endl;
    return 0;
}
