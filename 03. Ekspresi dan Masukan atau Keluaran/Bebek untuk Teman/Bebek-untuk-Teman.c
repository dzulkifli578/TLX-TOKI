// memasukkan file header stdio.h
#include <stdio.h>

// membuat main function (fungsi utama) program
int main ()
{
    // deklarasi (menentukan tipe data dan penamaan variabel) dan inisialisasi (memberikan nilai variabel) variabel bebek dan teman
    unsigned int bebek = 0, teman = 0;

    // meminta user memasukkan jumlah bebek dan jumlah teman
    scanf ("%u %u", &bebek, &teman);

    // menghitung berapa banyak bebek yang didapat masing-masing
    printf ("masing-masing %u \n", bebek / teman);
    // menghitung sisa bebek setelah dibagi rata
    printf ("bersisa %u", bebek % teman);

    // mengakhiri program dan mengembalikan nilai 0 ke sistem operasi (nilai 0 artinya program berjalan dengan sukses)
    return 0;
}