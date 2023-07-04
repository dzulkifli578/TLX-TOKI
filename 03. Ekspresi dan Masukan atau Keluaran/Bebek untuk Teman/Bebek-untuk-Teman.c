#include <stdio.h>

int main ()
{
    unsigned int bebek, bagi = 0;

    scanf ("%u %u", &bebek, &bagi);

    printf ("masing-masing %u \n", bebek / bagi);
    printf ("bersisa %u", bebek % bagi);

    return 0;
}