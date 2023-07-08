#include <iostream>

int main ()
{
	unsigned short kandang_bebek = 0, bebek = 0, jumlah_bebek = 0;

	std::cin >> kandang_bebek;

	for (unsigned short i = 1; i <= kandang_bebek; i++)
	{
		std::cin >> jumlah_bebek;
		bebek += jumlah_bebek;
	}

	std::cout << bebek;

	return 0;
}
