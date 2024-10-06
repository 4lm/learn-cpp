///////////////
// Input/Output
///////////////

// C++ input and output uses streams
// cin, cout, and cerr represent stdin, stdout, and stderr.
// << is the insertion operator and >> is the extraction operator.

#include <iostream> // Include for I/O streams

int main()
{
    int favorite_number;

    std::cout << "Enter the one true number: ";
    std::cin >> favorite_number;

    if (favorite_number == 37)
    {
        std::cout << "That number is correct!" << '\n';
        return 0;
    }
    else
    {
        std::cerr << "Wrong number!" << '\n';
        return 1;
    }
}
