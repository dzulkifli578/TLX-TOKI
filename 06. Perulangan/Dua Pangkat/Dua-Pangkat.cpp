#include <iostream>

int main ()
{
    int bilangan = 0;

    std::cin >> bilangan;

    while (bilangan % 2 == 0)
    {
        bilangan /= 2;
    }

    if (bilangan == 1)
    {
        std::cout << "ya";
    }
    else
    {
        std::cout << "bukan";
    }

    return 0;
}