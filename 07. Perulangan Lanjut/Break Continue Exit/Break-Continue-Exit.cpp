#include <iostream>

int main ()
{
    unsigned short bilangan = 0;

    std::cin >> bilangan;

    for (unsigned short i = 1; i <= bilangan; i++)
    {
        if (i % 10 == 0)
        {
            continue;
        }
        
        if (i == 42)
        {
            std::cout << "ERROR";
            break;
        }

        std::cout << i << "\n";
    }

    return 0;
}