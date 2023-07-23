#include <iostream>

int main ()
{
    unsigned short bilangan = 0, angka = 0;

    std::cin >> bilangan;

    for (unsigned short i = 1; i <= bilangan; i++)
    {
        for (unsigned short j = 1; j <= i; j++)
        {
            std::cout << angka;
            angka++;

            if (angka == 10)
            {
                angka = 0;
            }
        }
        std::cout << "\n";
    }
    return 0;
}