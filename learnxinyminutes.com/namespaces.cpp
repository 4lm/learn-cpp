/////////////
// Namespaces
/////////////

// Namespaces provide separate scopes for variable, function,
// and other declarations.
// Namespaces can be nested.

#include <_printf.h>

namespace First
{
    namespace Nested
    {
        void foo()
        {
            printf("This is First::Nested::foo\n");
        }
    } // end namespace Nested
} // end namespace First

namespace Second
{
    void foo()
    {
        printf("This is Second::foo\n");
    }
    void bar()
    {
        printf("This is Second::bar\n");
    }
}

void foo()
{
    printf("This is global foo\n");
}

int main()
{
    // Includes all symbols from namespace Second into the current scope. Note
    // that while bar() works, simply using foo() no longer works, since it is
    // now ambiguous whether we're calling the foo in namespace Second or the
    // top level.
    using namespace Second;

    bar();                // prints "This is Second::bar"
    Second::foo();        // prints "This is Second::foo"
    First::Nested::foo(); // prints "This is First::Nested::foo"
    ::foo();              // prints "This is global foo"
}
