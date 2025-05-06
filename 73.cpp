// Write a program to read and write complex data structures to a file using binary file streams.

#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    Student s1 = {"John Doe", 20, 88.5};

    ofstream fout("student.dat", ios::binary);
    fout.write((char*)&s1, sizeof(s1));
    fout.close();

    Student s2;
    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    cout << "Name: " << s2.name << "\nAge: " << s2.age << "\nMarks: " << s2.marks << endl;
    return 0;
}
