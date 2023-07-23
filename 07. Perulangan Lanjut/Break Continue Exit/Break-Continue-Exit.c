#include <stdio.h>

int main ()
{
    unsigned short bilangan = 0;

    scanf ("%hu", &bilangan);

    for (unsigned short i = 1; i <= bilangan; i++)
    {
        if (i % 10 == 0)
        {
            continue;
        }
        
        if (i == 42)
        {
            printf ("ERROR");
            break;
        }

        printf ("%hu\n", i);
    }

    return 0;
}