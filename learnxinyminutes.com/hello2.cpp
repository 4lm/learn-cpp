#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::cout << "Hello, world!" << "\n"; // Stream the string and newline directly.

    // Use << to stream the string literal and integer (converted to string) directly.
    std::cout << "Parameters Count: " << argc << "\n";

    std::cout << "Parameters:" << "\n";
    for (int i = 0; i < argc; i++)
    {
        // Stream the index, a string literal, and the argument in argv directly.
        std::cout << i + 1 << ".) " << argv[i] << "\n";
    }

    return 0;
}
