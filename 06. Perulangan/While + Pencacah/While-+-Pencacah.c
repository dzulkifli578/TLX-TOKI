#include <stdio.h>

int main ()
{
    unsigned short masukan = 0, keluaran = 0;

    while (scanf ("%hu", &masukan) != EOF)
    {
        keluaran += masukan;
    }
    
    printf ("%hu", keluaran);

    return 0;
}