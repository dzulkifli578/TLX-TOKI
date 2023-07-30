// memasukkan file header stdio.h
#include <stdio.h>

// membuat main function (fungsi utama) program
int main ()
{
    // deklarasi dan inisialisasi variabel A dan T
    float A = 0, T = 0;

    // input nilai variabel A dan T dari layar
    scanf ("%f %f", &A, &T);

    // mencetak hasil luas segitiga dari variabel A dan T dengan 2 angka di belakang koma ke layar
    printf ("%.2f", A * T / 2);

    // mengakhiri program dan mengembalikan nilai 0 ke sistem operasi (nilai 0 artinya program berjalan dengan sukses)
    return 0;
}