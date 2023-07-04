#include <stdio.h>

int main ()
{
    unsigned short A, B = 0;

    scanf ("%hu %hu", &A, &B);
    
    printf ("%hu", A + B);
    
    return 0;
}