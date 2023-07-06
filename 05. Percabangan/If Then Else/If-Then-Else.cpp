#include <iostream>

int main ()
{
    int bilangan = 0;

    std::cin >> bilangan;

    if (bilangan > 0)
    {
        std::cout << "positif";
    }
    else if (bilangan == 0)
    {
        std::cout << "nol";
    }
    else if (bilangan < 0)
    {
        std::cout << "negatif";
    }

    return 0;
}