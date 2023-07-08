#include <iostream>

int main ()
{
    char masukan [101];

    while (std::cin >> masukan)
    {
        std::cout << masukan << "\n";
    }
    
    return 0;
}