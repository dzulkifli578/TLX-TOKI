# map(int, ...)   = mengonversi nilai yang dipisahkan menjadi bilangan bulat.
# input().split() = memisahkan nilai A dan B yang dipisahkan oleh spasi.

# input nilai variabel A dan T dari layar
A, T = map (float, input ().split ())

# mencetak hasil luas segitiga dari variabel A dan T dengan 2 angka di belakang koma ke layar
print ("{:.2f}".format (A * T / 2))