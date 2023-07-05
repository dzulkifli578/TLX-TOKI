#include <iostream>
#include <iomanip>

int main ()
{
    unsigned short A = 0, T = 0;

    std::cin >> A >> T;

    std::cout << std::fixed << std::setprecision(2) << float (A) * float (T) / 2;

    return 0;
}