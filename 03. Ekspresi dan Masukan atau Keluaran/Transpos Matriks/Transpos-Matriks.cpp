// memasukkan file header iostream
#include <iostream>

// membuat main function (fungsi utama) program
int main ()
{
    // deklarasi variabel a, b, c, d, e, f, g, h, i
    unsigned short a, b, c, d, e, f, g, h, i;

    // input nilai variabel a, b, c dari layar
    std::cin >> a >> b >> c;
    // input nilai variabel d, e, f dari layar
    std::cin >> d >> e >> f;
    // input nilai variabel g, h, i dari layar
    std::cin >> g >> h >> i;

    // mencetak isi variabel a, d, g ke layar
    std::cout << a << " " << d << " " << g << "\n";
    // mencetak isi variabel b, e, h ke layar
    std::cout << b << " " << e << " " << h << "\n";
    // mencetak isi variabel c, f, i ke layar
    std::cout << c << " " << f << " " << i << "\n";

    // mengakhiri program dan mengembalikan nilai 0 ke sistem operasi (nilai 0 artinya program berjalan dengan sukses)
    return 0;
}