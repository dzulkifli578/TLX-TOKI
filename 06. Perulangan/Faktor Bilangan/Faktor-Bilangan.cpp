#include <iostream>

int main()
{
    int bilangan = 0;

    std::cin >> bilangan;

    for (int i = bilangan; i >= 1; i--)
    {
        if (bilangan % i == 0)
        {
            std::cout << i << "\n";
        }
    }

    return 0;
}
