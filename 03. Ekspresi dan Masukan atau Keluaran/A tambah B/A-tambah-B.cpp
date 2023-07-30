// memasukkan file header iostream
#include <iostream>

// membuat main function (fungsi utama) program
int main ()
{
    // deklarasi (menentukan tipe data dan penamaan variabel) dan inisialisasi (memberikan nilai variabel) variabel A dan B
    unsigned short A, B = 0;

    // input nilai variabel A dan B dari layar
    std::cin >> A >> B;
    
    // mencetak output ke layar dengan menjumlahkan nilai variabel A dan B
    std::cout << A + B;
    
    // mengakhiri program dan mengembalikan nilai 0 ke sistem operasi (nilai 0 artinya program berjalan dengan sukses)
    return 0;
}