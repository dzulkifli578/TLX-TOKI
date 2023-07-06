#include <stdio.h>

int main ()
{
    int bilangan = 0;

    scanf ("%i", &bilangan);

    if (bilangan % 2 == 0 && bilangan >= 0)
    {
        printf ("%i", bilangan);
    }
    
    return 0;
}