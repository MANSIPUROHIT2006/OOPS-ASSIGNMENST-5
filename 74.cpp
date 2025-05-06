 // Write a program to rename and delete files using the rename and remove functions.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    if (rename("oldfile.txt", "newfile.txt") == 0)
        cout << "File renamed successfully.\n";
    else
        cout << "Error renaming file.\n";

    if (remove("newfile.txt") == 0)
        cout << "File deleted successfully.\n";
    else
        cout << "Error deleting file.\n";

    return 0;
}
