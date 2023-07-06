#include <stdio.h>

int main ()
{
    int bilangan = 0;

    scanf ("%i", &bilangan);
    if (bilangan > 0)
    {
        printf ("positif");
    }
    else if (bilangan == 0)
    {
        printf ("nol");
    }
    else if (bilangan < 0)
    {
        printf ("negatif");
    }

    return 0;
}