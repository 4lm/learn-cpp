//////////
// Strings
//////////

// Strings in C++ are objects and have many member functions
#include <string>
#include <iostream>
#include <cstring>

int main()
{
    // C++ string objects
    std::string myString = "Hello";
    std::string myOtherString = " World";

    // + is used for concatenation
    std::cout << myString + myOtherString << std::endl; // Outputs "Hello World"
    std::cout << myString + " You" << std::endl;        // Outputs "Hello You"

    // C++ string length can be found from either string::length() or string::size()
    std::cout << myString.length() + myOtherString.size() << std::endl; // Outputs 11 (= 5 + 6)

    // C++ strings are mutable
    myString.append(" Dog");
    std::cout << myString << std::endl; // Outputs "Hello Dog"

    // C++ can handle C-style strings with related functions using cstrings
    char myOldString[20] = "Hello CPP"; // Ensure enough space to avoid overflow
    std::cout << myOldString << std::endl;
    std::cout << "Length = " << strlen(myOldString) << std::endl; // Outputs "Length = 9"

    return 0;
}
