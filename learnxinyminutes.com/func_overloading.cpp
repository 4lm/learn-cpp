#include <_printf.h>

void print(char const *str)
{
    printf("The string is \"%s\"\n", str);
}

void print(int number)
{
    printf("The answer is %d\n", number);
}

int main(void)
{
    print("Hello, world!");
    print(42);

    return 0;
}
