#include <stdio.h>

int main ()
{
    float bilangan = 0;
    int floor_positif = 0, ceiling_positif = 0, floor_negatif = 0, ceiling_negatif = 0;

    scanf ("%f", &bilangan);

    if (bilangan == (int) bilangan)
    {
        bilangan = trunc (bilangan);
        printf ("%.0f %.0f", bilangan, bilangan);
    }
    else if (bilangan > 0)
    {
        floor_positif = (int) bilangan;
        ceiling_positif = floor_positif + 1;
        printf ("%i %i", floor_positif, ceiling_positif);
    }
    else if (bilangan < 0)
    {
        ceiling_negatif = (int) bilangan;
        floor_negatif = ceiling_negatif - 1;
        printf ("%i %i", floor_negatif, ceiling_negatif);
    }

    return 0;
}