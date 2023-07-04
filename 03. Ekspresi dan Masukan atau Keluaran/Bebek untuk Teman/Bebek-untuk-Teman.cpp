#include <iostream>

int main ()
{
    unsigned int bebek, bagi = 0;

    std::cin >> bebek >> bagi;

    std::cout << "masing-masing " << bebek / bagi << "\n";
    std::cout << "bersisa " << bebek % bagi;
    
    return 0;
}