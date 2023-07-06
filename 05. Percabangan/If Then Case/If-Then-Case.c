#include <stdio.h>

int main ()
{
    int bilangan = 0;

    scanf ("%i", &bilangan);

    if (bilangan > 0 && bilangan < 10)
    {
        printf ("satuan");
    }
    else if (bilangan < 100)
    {
        printf ("puluhan");
    }
    else if (bilangan < 1000)
    {
        printf ("ratusan");
    }
    else if (bilangan < 10000)
    {
        printf ("ribuan");
    }
    else if (bilangan < 100000)
    {
        printf ("puluhribuan");
    }

    return 0;
}