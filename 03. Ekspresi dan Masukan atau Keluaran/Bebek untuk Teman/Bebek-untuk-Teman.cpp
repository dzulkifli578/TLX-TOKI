// memasukkan file header iostream
#include <iostream>

// membuat main function (fungsi utama) program
int main ()
{
    // deklarasi (menentukan tipe data dan penamaan variabel) dan inisialisasi (memberikan nilai variabel) variabel bebek dan teman
    unsigned int bebek = 0, teman = 0;

    // meminta user memasukkan jumlah bebek dan jumlah teman
    std::cin >> bebek >> teman;

    // menghitung berapa banyak bebek yang didapat masing-masing
    std::cout << "masing-masing " << bebek / teman << "\n";
    // menghitung sisa bebek setelah dibagi rata
    std::cout << "bersisa " << bebek % teman;
    
    // mengakhiri program dan mengembalikan nilai 0 ke sistem operasi (nilai 0 artinya program berjalan dengan sukses)
    return 0;
}