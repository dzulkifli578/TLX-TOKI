// getline = fungsi untuk membaca input kalimat dari user
// sintaks = getline (std::cin, {variabel});

// memasukkan file header iostream dan string
#include <iostream>

// membuat main function (fungsi utama) program
int main ()
{
    // deklarasi dan inisialisasi variabel kalimat
    std::string kalimat;

    // meminta input, membaca input yang berbentuk kalimat, dan menyimpannya ke variabel kalimat
    getline (std::cin, kalimat);

    // mencetak isi variabel kalimat ke layar
    std::cout << kalimat;
    
    // mengakhiri program dan mengembalikan nilai 0 ke sistem operasi (nilai 0 artinya program berjalan dengan sukses)
    return 0;
}