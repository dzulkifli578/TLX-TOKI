#include <stdio.h>

int main ()
{
    unsigned short bilangan = 0;

    scanf ("%hu", &bilangan);

    for (unsigned short i = 1; i <= bilangan; i++)
    {
        for (unsigned short j = 1; j <= bilangan - i; j++)
        {
            printf (" ");
        }

        for (unsigned short j = 1; j <= i; j++)
        {
            printf ("*");
        }
        
        printf ("\n");
    }

    return 0;
}