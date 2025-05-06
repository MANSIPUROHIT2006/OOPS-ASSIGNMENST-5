// Create a program that formats output using manipulators such as setw, setprecision, and 
fixed. 
#include <iostream>
using namespace std;

int main() {
    int age;
    float height;
    char gender;
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height: ";
    cin >> height;
    cout << "Enter your gender (M/F): ";
    cin >> gender;

    cout << "\nName: " << name << "\nAge: " << age << "\nHeight: " << height << "\nGender: " << gender << endl;
    return 0;
}
