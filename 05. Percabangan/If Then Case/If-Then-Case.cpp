#include <iostream>

int main ()
{
    int bilangan = 0;

    std::cin >> bilangan;

    if (bilangan > 0 && bilangan < 10)
    {
        std::cout << "satuan";
    }
    else if (bilangan < 100)
    {
        std::cout << "puluhan";
    }
    else if (bilangan < 1000)
    {
        std::cout << "ratusan";
    }
    else if (bilangan < 10000)
    {
        std::cout << "ribuan";
    }
    else if (bilangan < 100000)
    {
        std::cout << "puluhribuan";
    }

    return 0;
}