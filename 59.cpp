 // Write a program to demonstrate unformatted input and output using get and put 
// functions.
  #include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter characters (Ctrl+D to stop):\n";
    while (cin.get(ch)) {
        cout.put(ch);
    }
    return 0;
}
