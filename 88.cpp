// Implement a program that reads a configuration file and uses its settings to control program behavior.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream config("config.txt");
    string mode;
    getline(config, mode);

    if (mode == "DEBUG") {
        cout << "Running in DEBUG mode" << endl;
    } else {
        cout << "Running in NORMAL mode" << endl;
    }

    config.close();
    return 0;
}
