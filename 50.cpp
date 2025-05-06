 // Write a program to perform basic input and output using streams (cin and cout).

#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello " << name << "! You are " << age << " years old." << endl;
    return 0;
}
