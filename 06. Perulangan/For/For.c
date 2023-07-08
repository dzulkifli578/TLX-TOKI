#include <stdio.h>

int main()
{
    unsigned short kandang_bebek = 0, bebek = 0, jumlah_bebek = 0;

    scanf ("%hu", &kandang_bebek);

    for (unsigned short i = 1; i <= kandang_bebek; i++)
    {
        scanf ("%hu", &bebek);
        jumlah_bebek += bebek;
    }

    printf ("%hu", jumlah_bebek);
    
    return 0;
}
