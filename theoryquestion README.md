**1. What are streams in C++ and why are they important?**
Streams in C++ are sequences of bytes used to perform input and output operations. They act as interfaces between programs and input/output devices (like keyboard, screen, and files). Streams simplify I/O by abstracting the underlying data flow mechanisms.

**2. Explain the different types of streams in C++.**
There are two main types of streams in C++:

Input streams (e.g., cin, ifstream): for reading data.

Output streams (e.g., cout, ofstream): for writing data.
Additionally, fstream supports both input and output.

**3. How do input and output streams differ in C++?**

Input streams read data into the program (e.g., cin, ifstream).

Output streams send data out from the program (e.g., cout, ofstream).

**4. Describe the role of the iostream library in C++.**
The iostream library provides functionality for input/output operations using cin, cout, cerr, and clog. It includes essential classes like istream and ostream.

**5. What is the difference between a stream and a file stream?**

A stream handles I/O between the program and standard devices.

A file stream specifically handles I/O between the program and files using classes like ifstream, ofstream, and fstream.

**6. What is the purpose of the cin object in C++?**
cin is an instance of the istream class used to accept input from the standard input device (keyboard).

**7. How does the cin object handle input operations?**
cin uses the extraction operator (>>) to read data and automatically converts it to the appropriate data type.

**8. What is the purpose of the cout object in C++?**
cout is an instance of the ostream class used to output data to the standard output device (console).

**9. How does the cout object handle output operations?**
cout uses the insertion operator (<<) to send formatted data to the console.

**10. Explain the use of the insertion (<<) and extraction (>>) operators in conjunction with cin and cout.**

<< (insertion) sends data to an output stream (e.g., cout << "Hello";).

>> (extraction) reads data from an input stream (e.g., cin >> x;).

**11. What are the main C++ stream classes and their purposes?**

istream: for input from streams.

ostream: for output to streams.

ifstream: input from files.

ofstream: output to files.

fstream: input/output to/from files.

stringstream: I/O with strings.

**12. Explain the hierarchy of C++ stream classes.**
All stream classes derive from ios, which provides common functionality. istream and ostream are derived from ios. Other classes like ifstream, ofstream, and fstream further derive from istream, ostream, or both.

**13. What is the role of the istream and ostream classes?**

istream: handles input operations.

ostream: handles output operations.
They define methods like get(), put(), read(), and write().

**14. Describe the functionality of the ifstream and ofstream classes.**

ifstream: used for reading data from files.

ofstream: used for writing data to files.

**15. How do the fstream and stringstream classes differ from other stream classes?**

fstream: supports both input and output to files.

stringstream: performs input and output operations on strings.

**16. What is unformatted I/O in C++?**
Unformatted I/O involves reading/writing raw characters without specific formatting. It includes functions like get(), put(), getline().

**17. Provide examples of unformatted I/O function**.

cin.get(ch);

cin.getline(buffer, size);

cout.put('A');

**18. What is formatted I/O in C++?**
Formatted I/O refers to input/output with proper formatting (like precision, width). Example: cout << setw(10) << setprecision(2) << fixed << 3.14159;

**19. How do you use manipulators to perform formatted I/O in C++?**
Manipulators like setw, setprecision, fixed are used with cout to control output format:

cout << setw(10) << setprecision(3) << fixed << value;

**20. Explain the difference between unformatted and formatted I/O operations.**

Unformatted: deals with raw data; minimal control over layout.

Formatted: provides fine control over the representation of output/input.

**21. What are manipulators in C++?**
Manipulators are functions that change the behavior of I/O operations (like endl, setw, hex, etc.).

**22. How do manipulators modify the behavior of I/O operations?**
They set format flags or affect the I/O stream state, e.g., adjusting precision, width, or number base.

**23. Provide examples of commonly used manipulators in C++.**

endl: newline and flush.

setw(n): set width.

setprecision(n): set decimal precision.

fixed: fixed-point notation.

hex, dec, oct: change number base.

**24. Explain the use of the setw, setprecision, and fixed manipulators.**

cout << setw(10) << setprecision(4) << fixed << 3.14159;
setw(10): minimum width 10.

setprecision(4): 4 decimal places.

fixed: use fixed-point notation.

**25. How do you create custom manipulators in C++?**
Custom manipulators are functions that accept and return an ostream&:

ostream& custom(ostream &out) {
    out << "***";
    return out;
}
cout << custom << "Hello";

**26. What is a file stream in C++ and how is it used?**
A file stream in C++ is an interface to read from or write to files. It's used via classes like ifstream, ofstream, and fstream:

ifstream fin("input.txt");
ofstream fout("output.txt");

**27. Explain the process of opening and closing files using file streams.**

Open: Use constructors or .open() method.

Close: Use .close() method.


ofstream fout;
fout.open("file.txt");
fout << "Hello";
fout.close();

**28. Describe the different modes in which a file can be opened.**
Common file open modes:

ios::in – read

ios::out – write

ios::app – append

ios::ate – start at end

ios::binary – binary mode

ios::trunc – delete contents (default with ios::out)

**29. How do you read from and write to files using file streams?**

ifstream fin("input.txt");
string data;
fin >> data; // read

ofstream fout("output.txt");
fout << "Hello"; // write

**30. Provide an example of using file streams to copy the contents of one file to another.**


#include <fstream>
using namespace std;

int main() {
    ifstream fin("source.txt");
    ofstream fout("target.txt");
    char ch;
    while (fin.get(ch))
        fout.put(ch);
    fin.close();
    fout.close();
    return 0;
}

**31. What are the main C++ file stream classes and their purposes?**

ifstream: Input from files.

ofstream: Output to files.

fstream: Both input and output to files.

**32. Explain the role of the ifstream, ofstream, and fstream classes.**

ifstream: reads from files.

ofstream: writes to files.

fstream: supports both reading and writing.

**33. How do you use the ifstream class to read data from a file?**


ifstream fin("data.txt");
string name;
int age;
fin >> name >> age;
fin.close();

**34. How do you use the ofstream class to write data to a file?**

ofstream fout("data.txt");
fout << "John 25";
fout.close();

**35. Describe the functionality of the fstream class for both input and output operations.**
fstream can do both reading and writing:


fstream file("data.txt", ios::in | ios::out);
file << "Hello";
file.seekg(0);
string word;
file >> word;
file.close();

**36. What are file management functions in C++?**
Functions used to handle file-related tasks, e.g., remove(), rename(), seekg(), tellg().

**37. How do you use the remove and rename functions to manage files?


remove("oldfile.txt");         // deletes the file
rename("oldname.txt", "newname.txt"); // renames the file

**38. Explain the purpose of the seekg and seekp functions in file management.**

seekg(): Move input (get) pointer.

seekp(): Move output (put) pointer.
Used for random access in files.

**39. Provide examples of using file management functions to manipulate file pointers.**


fstream file("data.txt", ios::in | ios::out);
file.seekp(5);         // move put pointer to 5th byte
file << "Hi";          // write at new position

file.seekg(0);         // move get pointer to beginning
char ch;
file.get(ch);
file.close();

**40. What are file modes in C++?**
File modes specify how a file is opened and accessed: read, write, append, binary, etc.

**41. Describe the different file modes available in C++.**

ios::in: open for reading

ios::out: open for writing

ios::app: append to end

ios::trunc: clear file before writing

ios::ate: go to end of file upon open

ios::binary: binary mode

**42. How do you specify a file mode when opening a file?**


ofstream fout("data.txt", ios::app);
fstream file("data.txt", ios::in | ios::out);

**43. Explain the difference between binary and text file modes.**

Text mode: Data stored as human-readable characters.

Binary mode: Data stored in raw bytes, not human-readable, more compact and faster.

**44. Provide examples of opening files in different modes using file streams.**


ifstream fin("file.txt", ios::in);                  // text read
ofstream fout("file.txt", ios::out | ios::app);     // append text
fstream file("file.dat", ios::in | ios::out | ios::binary); // binary

**45. What are binary files in C++ and how do they differ from text files?**
Binary files store data in the same format as in memory (raw bytes). They're efficient and compact, but not human-readable. Text files store data as readable characters.

**46. Explain the process of reading from and writing to binary files.**

ofstream fout("data.dat", ios::binary);
int a = 10;
fout.write((char*)&a, sizeof(a));
fout.close();

ifstream fin("data.dat", ios::binary);
int b;
fin.read((char*)&b, sizeof(b));
fin.close();

**47. What are random access files in C++?**
Files that allow direct access to any part (random location) using file pointers, rather than sequentially reading through the entire file.

**48. How do you perform random access operations on files?**
Use seekg() and seekp() to move the get/put pointers:

file.seekg(position);
file.read((char*)&var, sizeof(var));

**49. Provide examples of using file streams to implement random access in binary files.**


#include <fstream>
using namespace std;

int main() {
    fstream file("numbers.dat", ios::in | ios::out | ios::binary);
    int value = 50;
    file.seekp(2 * sizeof(int)); // 3rd int
    file.write((char*)&value, sizeof(value));

    file.seekg(2 * sizeof(int));
    int readVal;
    file.read((char*)&readVal, sizeof(readVal));
    cout << readVal;
    file.close();
    return 0;
}
