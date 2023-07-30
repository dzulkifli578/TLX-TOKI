// std::fixed dan std::setprecision = fungsi untuk menetapkan angka di belakang koma
// sintaks                          = std::fixed << std::setprecision ({angka di belakang koma})

// memasukkan file header iostream dan iomanip
#include <iostream>
#include <iomanip>

// membuat main function (fungsi utama) program
int main ()
{
    // deklarasi dan inisialisasi variabel A dan T
    unsigned short A = 0, T = 0;

    // input nilai variabel A dan T dari layar
    std::cin >> A >> T;

    // mencetak hasil luas segitiga dari variabel A dan T menggunakan tipe data float dengan 2 angka di belakang koma ke layar
    std::cout << std::fixed << std::setprecision (2) << float (A) * float (T) / 2;

    // mengakhiri program dan mengembalikan nilai 0 ke sistem operasi (nilai 0 artinya program berjalan dengan sukses)
    return 0;
}