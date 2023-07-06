#include <iostream>

int main ()
{
    int bilangan = 0;

    std::cin >> bilangan;

    if (bilangan % 2 == 0 && bilangan >= 0)
    {
        std::cout << bilangan;
    }
    
    return 0;
}