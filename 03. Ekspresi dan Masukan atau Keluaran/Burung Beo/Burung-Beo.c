// fgets   = fungsi untuk membaca input kalimat dari user
// sintaks = fgets ({variabel}, sizeof ({variabel}), stdin);

// memasukkan file header stdio.h
#include <stdio.h>

// membuat main function (fungsi utama) program
int main ()
{
    // deklarasi dan inisialisasi variabel kalimat
    char kalimat [100] = "";

    // meminta input, membaca input yang berbentuk kalimat, dan menyimpannya ke variabel kalimat
    fgets (kalimat, sizeof (kalimat), stdin);

    // mencetak isi variabel kalimat ke layar
    printf ("%s", kalimat);

    // mengakhiri program dan mengembalikan nilai 0 ke sistem operasi (nilai 0 artinya program berjalan dengan sukses)
    return 0;
}