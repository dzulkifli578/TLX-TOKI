#include <stdio.h>

int main ()
{
    char kalimat [100] = "";

    fgets (kalimat, sizeof (kalimat), stdin);

    printf ("%s", kalimat);

    return 0;
}