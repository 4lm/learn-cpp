#include <iostream>

int add(int a = 0, int b = 0)
{
    return a + b;
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        std::cout << add(a, b) << "\n";
    }
    else
    {
        std::cout << add() << "\n";
    }

    return 0;
}
