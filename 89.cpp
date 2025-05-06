// Create a program that logs error messages to a file using file streams.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream errorLog("error.log", ios::app);

    int x = -5;
    if (x < 0) {
        errorLog << "Error: Negative value encountered: " << x << endl;
    }

    errorLog.close();
    cout << "Error (if any) logged to file." << endl;
    return 0;
}
