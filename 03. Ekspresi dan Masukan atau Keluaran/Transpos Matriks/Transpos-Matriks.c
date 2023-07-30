// memasukkan file header stdio.h
#include <stdio.h>

// membuat main function (fungsi utama) program
int main ()
{
    // deklarasi variabel a, b, c, d, e, f, g, h, i
    unsigned short a, b, c, d, e, f, g, h, i;

    // input nilai variabel a, b, c dari layar
    scanf ("%hu %hu %hu", &a, &b, &c);
    // input nilai variabel d, e, f dari layar
    scanf ("%hu %hu %hu", &d, &e, &f);
    // input nilai variabel g, h, i dari layar
    scanf ("%hu %hu %hu", &g, &h, &i);

    // mencetak isi variabel a, d, g ke layar
    printf ("%hu %hu %hu \n", a, d, g);
    // mencetak isi variabel b, e, h ke layar
    printf ("%hu %hu %hu \n", b, e, h);
    // mencetak isi variabel c, f, i ke layar
    printf ("%hu %hu %hu \n", g, h, i);

    // mengakhiri program dan mengembalikan nilai 0 ke sistem operasi (nilai 0 artinya program berjalan dengan sukses)
    return 0;
}