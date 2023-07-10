#include <stdio.h>

int main ()
{
    int bilangan = 0;

    scanf ("%i", &bilangan);

    while (bilangan % 2 == 0)
    {
        bilangan /= 2;
    }

    if (bilangan == 1)
    {
        printf ("ya");
    }
    else
    {
        printf ("bukan");
    }

    return 0;
}