#include <stdio.h>

int main()
{
    int bilangan = 0;

    scanf ("%i", &bilangan);

    for (int i = bilangan; i >= 1; i--)
    {
        if (bilangan % i == 0)
        {
            printf ("%i\n", i);
        }
    }

    return 0;
}
