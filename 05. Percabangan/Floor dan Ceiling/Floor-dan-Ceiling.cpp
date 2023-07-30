#include <iostream>
#include <cmath>

int main ()
{
    float bilangan = 0;
    int ceiling_positif = 0, floor_positif = 0, ceiling_negatif = 0, floor_negatif = 0;;

    std::cin >> bilangan;

    if (bilangan == int (bilangan))
    {
        bilangan == trunc (bilangan);
        std::cout << bilangan << " " << bilangan;
    }
    else if (bilangan > 0)
    {
        floor_positif = int (bilangan);
        ceiling_positif = floor_positif + 1;
        std::cout << floor_positif << " " << ceiling_positif;
    }
    else if (bilangan < 0)
    {
        ceiling_negatif = int (bilangan);
        floor_negatif = ceiling_negatif - 1;
        std::cout << floor_negatif << " " << ceiling_negatif;
    }

    return 0;
}