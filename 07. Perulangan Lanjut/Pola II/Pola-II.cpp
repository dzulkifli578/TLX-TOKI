#include <iostream>

int main ()
{
    unsigned short bilangan = 0;

    std::cin >> bilangan;

    for (unsigned short i = 1; i <= bilangan; i++)
    {
        for (unsigned short j = 1; j <= bilangan - i; j++)
        {
            std::cout << " ";
        }

        for (unsigned short j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        
        std::cout << "\n";
    }

    return 0;
}