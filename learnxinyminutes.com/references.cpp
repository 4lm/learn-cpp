#include <iostream>
#include <string>

// Function to simulate returning a temporary object
std::string tempObjectFun()
{
    return "Temporary object";
}

// Regular reference function
void someFun(std::string &s)
{
    std::cout << "Called with lvalue reference\n";
}

// Rvalue reference function
void someFun(std::string &&s)
{
    std::cout << "Called with rvalue reference\n";
}

int main()
{
    // References
    std::string foo = "I am foo";
    std::string bar = "I am bar";

    std::string &fooRef = foo;        // This creates a reference to foo.
    fooRef += ". Hi!";                // Modifies foo through the reference
    std::cout << fooRef << std::endl; // Prints "I am foo. Hi!"

    std::cout << &fooRef << '\n'; // Prints the address of foo

    // Doesn't reassign "fooRef". This is the same as "foo = bar",
    // and foo == "I am bar" after this line.
    fooRef = bar;                 // Reassigns the value of foo to bar
    std::cout << &fooRef << '\n'; // Still prints the address of foo
    std::cout << fooRef << '\n';  // Prints "I am bar"

    // The address of fooRef remains the same, i.e., it is still referring to foo.

    const std::string &barRef = bar; // Create a const reference to bar.
    // barRef += ". Hi!";  // Error, const references cannot be modified. This line is commented to avoid compilation errors.

    // Handling temporary objects and const references
    std::string retVal = tempObjectFun(); // Temporary object is returned, then assigned to retVal

    // Now back to references. The exception to the "at the end of the enclosing
    // expression" rule is if a temporary object is bound to a const reference,
    // in which case its life gets extended to the current scope:
    const std::string &constRef = tempObjectFun(); // Temporary object is bound to a const reference
    std::cout << constRef << std::endl;            // "Temporary object" is printed

    // Rvalue references (introduced in C++11)
    someFun(foo);             // Calls the version with regular reference
    someFun(tempObjectFun()); // Calls the version with temporary reference (rvalue)

    return 0;
}
