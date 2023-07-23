#include <stdio.h>

int main ()
{
    unsigned short bilangan = 0, angka = 0;

    scanf ("%hu", &bilangan);

    for (unsigned short i = 1; i <= bilangan; i++)
    {
        for (unsigned short j = 1; j <= i; j++)
        {
            printf ("%hu", angka);
            angka++;

            if (angka == 10)
            {
                angka = 0;
            }
        }
        printf ("\n");
    }
    return 0;
}