// Write a program that updates specific records in a binary file using random access.

#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    char name[30];
};

int main() {
    Student s[] = {{1, "John"}, {2, "Jane"}};
    fstream file("student.dat", ios::in | ios::out | ios::binary | ios::trunc);
    file.write((char*)&s, sizeof(s));

    Student updated = {2, "Janet"};
    file.seekp(sizeof(Student)); // Update 2nd record
    file.write((char*)&updated, sizeof(updated));
    file.close();

    ifstream fin("student.dat", ios::binary);
    Student temp;
    while (fin.read((char*)&temp, sizeof(temp))) {
        cout << "Roll: " << temp.roll << ", Name: " << temp.name << endl;
    }
    fin.close();
    return 0;
}
