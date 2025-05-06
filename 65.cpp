// Create a program that uses manipulators to format currency and percentage values.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float price = 1234.567;
    float percentage = 87.456;

    cout << "Formatted currency: $" << fixed << setprecision(2) << price << endl;
    cout << "Formatted percentage: " << fixed << setprecision(1) << percentage << "%" << endl;
    return 0;
}
