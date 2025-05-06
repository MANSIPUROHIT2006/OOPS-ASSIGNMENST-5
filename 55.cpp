 // Implement a program that reads user input for name, age, and salary, and then displays 
// the information using formatted output. 
  #include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int age;
    float salary;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter salary: ";
    cin >> salary;

    cout << "\nName: " << name 
         << "\nAge: " << age 
         << "\nSalary: " << fixed << setprecision(2) << salary << endl;
    return 0;
}
