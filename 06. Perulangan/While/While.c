#include <stdio.h>

int main ()
{
    char masukan [101];

    while (scanf ("%s", &masukan) != EOF)
    {
        printf ("%s\n", masukan);
    }
    
    return 0;
}