 // Implement a program that uses random access to read and write data at specific positions in a binary file.
#include <iostream>
#include <fstream>


using namespace std;

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    fstream file("random.dat", ios::in | ios::out | ios::binary | ios::trunc);

    for (int i = 0; i < 5; i++) {
        file.write((char*)&nums[i], sizeof(nums[i]));
    }

    int newNum = 99;
    file.seekp(2 * sizeof(int)); // Position of 3rd element
    file.write((char*)&newNum, sizeof(newNum));

    file.seekg(0);
    int value;
    while (file.read((char*)&value, sizeof(value))) {
        cout << value << " ";
    }

    file.close();
    return 0;
}
