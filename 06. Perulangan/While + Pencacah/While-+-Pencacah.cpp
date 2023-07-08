#include <iostream>

int main ()
{
    unsigned short masukan = 0, keluaran = 0;

    while (std::cin >> masukan)
    {
        keluaran += masukan;
    }
    
    std::cout << keluaran;

    return 0;
}